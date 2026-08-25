class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //move to unordered_map 
        // try to push all the array into the unordered map 
        set<int> unique(nums.begin(), nums.end());
        int i = 0;
        for (int num : unique) {
            nums[i++] = num;
        }
        return unique.size();
    }
};