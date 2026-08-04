All Submissions
Accepted
23 / 23 test cases
Memory: 112 MB
•
Time: 9ms
•
Submitted at: 07/26/2026 22:55
•
Runtime
9ms
|
Beats 79.29%
Memory
112.0 MB
|
Beats 44.18%
60%
45%
30%
15%
0%
4ms
You
84ms
156ms
468ms
1724ms
Analyze Complexity
Code  |  C++

Visualize code

Share Solution


class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int, int> mp;

        mp[0] = 1;

        int sum = 0;
        int count = 0;

        for (int num : nums) {

            sum += num;

            if (mp.find(sum - k) != mp.end()) {
                count += mp[sum - k];
            }

            mp[sum]++;
        }

        return count;
    }
};