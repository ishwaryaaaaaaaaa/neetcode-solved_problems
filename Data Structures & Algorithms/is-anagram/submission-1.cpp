class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false; 
        }
        vector<int>m(26, 0); 
        vector<int>n(26, 0);
        for(int i= 0 ; i < s.size() ; i++){
        m[s[i]-'a']++;
        n[t[i]-'a']++;

    }
     if(m!= n ){
            return false; 
        }
        
    return true ;
    }
};
