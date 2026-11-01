class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int,int> ans;
        for(int i=0;i<n;i++){
            ans[nums[i]]++;
        }
        int cnt = n / 2;
        int val;
        for(auto x : ans){
            if(x.second > cnt){
                val = x.first;
            }
        }
        return val;
    }
};