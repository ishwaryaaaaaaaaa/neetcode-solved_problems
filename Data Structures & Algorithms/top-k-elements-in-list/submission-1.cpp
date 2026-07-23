class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
        // see here we need to find the vector , 
        vector<int>l;
        vector<pair<int , int>>m ; 
        unordered_map<int , int>p ; 
        for(int i= 0 ; i < nums.size() ; i++){
            p[nums[i]]++ ;
        }
        for(auto x : p){
            m.push_back({x.first , x.second});
        }
        sort(m.begin(), m.end(), [](pair<int,int> a, pair<int,int> b){
         return a.second > b.second;
});
        
        for(int i = 0 ; i< k ; i++){
            l.push_back(m[i].first);
        }
        return l ; 

    }
};
