class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // optimal solutuion
        // u can see a pattern here , arr[i]= prefix[i] * suffix[i]
        vector<int> m(nums.size(), 1);
        vector<int> n(nums.size(), 1);
        vector<int> ans;
        int r = 1;
        for (int i = 1; i < nums.size(); i++) {
            m[i] = m[i - 1] * nums[i - 1];
        }
        for (int i = nums.size() - 2; i >= 0; i--) {
            n[i] = nums[i + 1] * n[i + 1];
        }
        for (int i = 0; i < nums.size(); i++) {
            r = n[i] * m[i];
            ans.push_back(r);
        }
        return ans;
    }
};
