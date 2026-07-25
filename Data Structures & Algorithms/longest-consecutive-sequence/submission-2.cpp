class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> m(nums.begin(), nums.end());
        int maxLen = 0;

        for (int x : m) {
            // skip if x is not the largest of its chain
            if (m.count(x + 1)) {
                continue;
            }
            // x is a chain end — walk backward
            int length = 1;
            int curr = x;
            while (m.count(curr - 1)) {
                curr--;
                length++;
            }
            maxLen = max(maxLen, length);
        }

        return maxLen;
    }
};
