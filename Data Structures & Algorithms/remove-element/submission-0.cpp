class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // first we need to find element 
        int count = 0; 
        for(int x :nums){
            if(x != val){
                nums[count]=x;
                count++;
            }
            
        }
        return count ; 
    }
};