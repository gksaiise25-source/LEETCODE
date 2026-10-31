class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            int x = 0;
            for(int j=0;j<accounts[i].size();j++){
                x+=accounts[i][j];
            }
            ans.push_back(x);
        }
        int max=ans[0];
        for(int i=1;i<n;i++){
            if(ans[i]>max){
                max = ans[i];
            }
        }
        return max;
    }
};