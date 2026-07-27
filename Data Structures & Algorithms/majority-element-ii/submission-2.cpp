class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1 = 0, count2 = 0;
        int candidate1 = 0, candidate2 = 1; // dummy different values
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++){
            int element = nums[i];
            if(element == candidate1) count1++;
            else if(element == candidate2) count2++;
            else if(count1 == 0){ candidate1 = element; count1 = 1; }
            else if(count2 == 0){ candidate2 = element; count2 = 1; }
            else{ count1--; count2--; }
        }

        int n = nums.size();
        int c1 = 0, c2 = 0;
        for(int x : nums){
            if(x == candidate1) c1++;
            else if(x == candidate2) c2++;
        }
        if(c1 > n/3) ans.push_back(candidate1);
        if(c2 > n/3) ans.push_back(candidate2);
        return ans;
    }
};