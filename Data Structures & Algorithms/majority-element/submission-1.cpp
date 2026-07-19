class Solution {
public:
    int majorityElement(vector<int>& nums) {
        /// this is called some kind of voting mecahnisims 
        /// like counting only 
        // you chnage the element when the next element is another 
        // leader = arr[i];
        // when count == 0 , change the leader 
        int count = 1 ; 
        int leader = nums[0]; 
        
        for(int i = 1 ; i < nums.size() ; i++){
            if(leader != nums[i] ){
                count--;
                if(count == 0){
                    leader = nums[i];
                    count++;
                }
                
            }
            else if(leader == nums[i]){
                count++;
            }
            
            
        }
        return leader ; 
    }
};