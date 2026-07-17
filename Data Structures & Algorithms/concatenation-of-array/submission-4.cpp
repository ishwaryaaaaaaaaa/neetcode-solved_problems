class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>s = nums ; 
        s.insert(s.end() ,nums.begin() , nums.end());
        return s;
    }
};