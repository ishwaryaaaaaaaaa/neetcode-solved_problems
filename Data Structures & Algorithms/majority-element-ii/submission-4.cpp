class Solution {
   public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> m;
        int candidate1 = 1;
        int candidate2 = 0;
        int count1 = 0;
        int count2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (candidate1 == nums[i]) {
                count1++;
            } else if (candidate2 == nums[i]) {
                count2++;
            } else if (count1 == 0) {
                candidate1 = nums[i];
            } else if (count2 == 0) {
                candidate2 = nums[i];
            }
        }
        int normal_cnt1 = 0;
        int normal_cnt2 = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == candidate1) {
                normal_cnt1++;
            } else if (nums[i] == candidate2) {
                normal_cnt2++;
            }
        }

        if (normal_cnt1 > (nums.size() / 3)) {
            m.push_back(candidate1);
        }
        if (normal_cnt2 > (nums.size() / 3)) {
            m.push_back(candidate2);
        }

        return m;
    }
};