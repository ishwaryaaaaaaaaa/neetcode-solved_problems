class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>s;
        for(int i = 0 ; i < 2*n ; i++){
            if(i < n){
                s.push_back(nums[i]);

            }
            else if (i >= n){
                s.push_back(nums[i-n]);
            }
            
        
        
        }
        return s ;
        

        
    }    
};
Accepted

$0