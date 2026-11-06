class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 1;
        int x = nums[nums.size()-1];
        for(int i = nums.size()-2; i >= 0; i--) {
            if(nums[i] != x) {
                count++;
                x = nums[i];
            }
            if(count == 3) {
                return x;
            }
        }
        return nums[nums.size()-1];
    }
};