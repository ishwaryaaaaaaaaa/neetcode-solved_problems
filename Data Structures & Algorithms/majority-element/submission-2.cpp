class Solution {
   public:
    int majorityElement(vector<int>& nums) {
        int count1 = 1;
        int count2 = 1;
        int candidate1 = nums[0];
        int candidate2 = nums[1];
        vector<int> ans;
        for (int i = 2; i < nums.size(); i++) {
            int element = nums[i];
            if (element == candidate1) {
                count1++;
            } else if (element == candidate2) {
                count2++;
            } else {
                count1--;
                count2--;
                if (count1 == 0) {
                    candidate1 = element;
                }
                if (count2 == 0) {
                    candidate2 = element;
                }
            }
        }
        if (candidate1 != candidate2) {
            ans.push_back(candidate1);
            ans.push_back(candidate2);
        } else {
            ans.push_back(candidate1);
        }

        return ans;
    }
};