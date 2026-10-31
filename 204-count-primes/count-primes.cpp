class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2) return 0;

        vector<bool> ans(n, true);

        ans[0] = ans[1] = false;

        for(int i = 2; i * i < n; i++) {
            if(ans[i] == true) {
                for(int j = i * i; j < n; j += i) {
                    ans[j] = false;
                }
            }
        }

        int cnt = 0;

        for(int i = 2; i < n; i++) {
            if(ans[i] == true) {
                cnt++;
            }
        }

        return cnt;
    }
};