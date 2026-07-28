class Solution {
public:
    bool isPalindrome(string s) {
        for (int i = 0 ; i < s.size() ; i++){
            if(!isalnum(s[i])){ 
                s.erase(i ,1 ); 
            }
        }
        int left = 0 ; 
        int right = s.size() -1 ; 
        while(left >= right){
           if(s[right] == s[left]){
            right--; 
            left++; 
           }
           else { 
            return false ; 
           }
            


        }
        return true ; 
    }
};
