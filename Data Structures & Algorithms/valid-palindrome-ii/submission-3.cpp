class Solution {
public:
    bool validPalindrome(string s) {
        // return true , if u can get a palindrome by deleting atmost one character 
        int left = 0 ; 
        int right = s.length() - 1 ; 
        if(s[left]!=s[right]){
            left++;
        }

        else if (s[left]==s[right]){
            left++;
            right--;
        }
        return true; 

        else{
            return false; 
        }
    }
};
