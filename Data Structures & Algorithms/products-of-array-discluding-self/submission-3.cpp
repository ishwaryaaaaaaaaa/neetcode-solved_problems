class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> m;
        for(int i = 0; i < nums.size(); i++){
            int r = 1;
            for(int j = 0; j < nums.size(); j++){
                if (j != i) r *= nums[j];
            }
            m.push_back(r);
        }
        return m;
    }
};