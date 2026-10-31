class Solution {
public:
    bool isPowerOfThree(int n) {
        vector<int> bin;
        int cnt = 0;

        if(n <= 0) {
            return false;
        }

        while(n > 0) {
            bin.push_back(n % 3);
            n /= 3;
        }

        int m = bin.size();

        for(int i = 0; i < m; i++) {
            if(bin[i] == 1) {
                cnt++;
            }
            else if(bin[i] == 2) {
                return false;
            }
        }

        return cnt == 1;
    }
};