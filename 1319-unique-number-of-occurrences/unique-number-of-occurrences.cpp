
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> ans;
        vector<int> c;
        for(int i=0;i<arr.size();i++) {
            ans[arr[i]]++;
        }
        for(auto x : ans) {
            c.push_back(x.second);
        }
        sort(c.begin(), c.end());
        for(int i=0;i<c.size()-1;i++) {
            if(c[i]==c[i+1]) {
                return false;
            }
        }
        return true;
    }
};
