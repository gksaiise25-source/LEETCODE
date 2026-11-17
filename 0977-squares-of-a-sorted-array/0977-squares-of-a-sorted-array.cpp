class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int left = 0;
        int right = n - 1;
        int k = n - 1;
        while(left <= right) {
            int l = nums[left] * nums[left];
            int r = nums[right] * nums[right];
            if(l > r) {
                ans[k] = l;
                left++;
            }
            else {
                ans[k] = r;
                right--;
            }
            k--;
        }
        return ans;
    }
};