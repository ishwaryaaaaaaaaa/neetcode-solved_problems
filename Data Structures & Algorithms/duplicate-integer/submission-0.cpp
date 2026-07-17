class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size(); 
        sort(nums.begin() , nums.end());
        int i = 0 ; 
        while(i < n-1){
            if(nums[i]==nums[i+1]){
                return true ; 
            }
            
        i++;
        }
        return false ; 

    }
};