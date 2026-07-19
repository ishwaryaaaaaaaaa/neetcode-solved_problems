class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans; 
        map<vector<int> ,vector<string>> m ; 
        for(int i =0 ; i < strs.size() ; i++){
            vector<int>r(26,0);
            for(int j = 0 ; j < strs[i].size() ; j++)
            
             r[strs[i][j]-'a']++;
             m[r].push_back(strs[i]);
            
        }
        for(auto x : m){
            ans.push_back(x.second);







        }
        return ans;
    }
};
