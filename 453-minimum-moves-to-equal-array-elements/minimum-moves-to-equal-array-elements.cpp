class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int minimum = nums[0];
        int ans = 0;

        for(int i = 1; i < n; i++) {
            minimum = min(minimum, nums[i]);
        }

        for(int i = 0; i < n; i++) {
            ans += nums[i] - minimum;
        }

        return ans;
    }
};