class Solution {
public:
    int numberOfSteps(int num) {
        int ch = 0;
        while(num != 0){
            if(num%2==0){
                num/=2;
                ch++;
            }else{
                num-=1;
                ch++;
            }
        }
        return ch;
    }
};