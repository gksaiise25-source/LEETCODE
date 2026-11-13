class Solution {
    public int maximumProduct(int[] nums) {
        int m1 = Integer.MIN_VALUE;
        int m2 = Integer.MIN_VALUE;
        int m3 = Integer.MIN_VALUE;
        int m4 = Integer.MAX_VALUE;
        int m5 = Integer.MAX_VALUE;
        for(int x : nums){
            if(x>m1){
                m3=m2;
                m2=m1;
                m1=x;
            }else if(x>m2){
                m3=m2;
                m2=x;
            }else if(x>m3){
                m3=x;
            }
            if(x<m4){
                m5=m4;
                m4=x;
            }else if(x<m5){
                m5=x;
            }
        }
        return Math.max(m1*m2*m3,m1*m4*m5);
    }
}