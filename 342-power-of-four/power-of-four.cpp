class Solution {
public:
    bool isPowerOfFour(int n) {
        vector<int> bin;
        bool ans ;
        int cnt = 0;
        if(n<=0){
            return false;
        }
        while(n>0){
            bin.push_back(n%4);
            n/=4;
        }
        int m = bin.size();
        for(int i=0;i<m;i++){
            if(bin[i]==1){
                cnt++;
            }
            if(bin[i] == 2||bin[i]==3){
                return false;
            }
        }
        return cnt == 1;
    }
};