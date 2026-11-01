class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        vector<int> c;
        vector<int> ans;
        for(int i = 0; i < n; i++){
            if(arr[i] != 0){
                c.push_back(arr[i]);
            }
        }
        int j = 0;
        int k = 0;
        while(j < n){
            if(arr[j] != 0){
                ans.push_back(c[k]);
                k++;
            }
            else{
                ans.push_back(0);
                ans.push_back(0);
            }
            j++;
        }
        for(int i = 0; i < n; i++){
            arr[i] = ans[i];
        }
    }
};