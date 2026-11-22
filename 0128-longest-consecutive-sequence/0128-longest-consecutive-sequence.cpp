class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int longest = 0;

        for (int num : st) {
            if (st.find(num - 1) == st.end()) {
                int cnt = 1;
                int curr = num;

                while (st.find(curr + 1) != st.end()) {
                    cnt++;
                    curr++;
                }

                longest = max(longest, cnt);
            }
        }

        return longest;
    }
};