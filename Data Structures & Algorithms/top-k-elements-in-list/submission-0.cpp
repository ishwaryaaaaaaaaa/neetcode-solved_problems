class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>m;
        unordered_map<int,int>r ; 
        for(int i = 0 ; i < nums.size() ; i++){
            r[nums[i]]++;
        }
        for(auto x :r ){
            if(x.second >= k){
               int  s = x.first;
              m.push_back(s);
            }
        }
        return m ; 

       
    }
};
