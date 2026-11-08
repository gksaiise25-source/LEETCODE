class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int n = s.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            int m = s[i].size();
            int cnt = 0;
            for(int j=0;j<m;j++){
                if(s[i][j]==' '){
                    cnt++;
                }
            }
            ans.push_back(cnt);
        }
        int mx = ans[0];
        for(int i=1;i<ans.size();i++){
                if(ans[i]>mx){
                    mx = ans[i];
                }
            }
            return mx+1;
    }
};