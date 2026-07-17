class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>m ;
        int n = nums.size() ;  
        for(int i = 0 ; i < nums.size() ; i++){
            for(int j = i+1 ;  j <n; j++ ){
                if(nums[i]+nums[j]== target){
                    m.push_back(i);
                    m.push_back(j);
                    return m ; 
                }
            }
        }
         
        

        
    }
};
