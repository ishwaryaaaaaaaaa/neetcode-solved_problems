class Solution {
public:
    bool isAnagram(string s, string t) {
       unordered_map<char , int> l; 
       for(int i = 0 ; i < s.size() ; i++){
        l[s[i]]++;
       }
       for(int i = 0 ; i < t.size() ; i++){
        l[t[i]]--;
       }

       for(auto  x:l ){
        if(x.second != 0 ){
            return false ; 
        }
       }
       return true ; 
    }
};
