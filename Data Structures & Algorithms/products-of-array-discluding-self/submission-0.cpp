class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // u have to find the product of all the elements except nums[i]
        // we can use the same nums , no need for any other

        vector<int> m;
        for (int i = 0; i < nums.size(); i++) {
            int r = 1;
            for (int j = 0; j < nums.size() && j != i; j++) {
                r *= nums[j];
            }
            m.push_back(r);
        }
        return m;
    }
};
// ur also enjoying prince treatement onlyyyyyyyyyyy ; cute prince ><