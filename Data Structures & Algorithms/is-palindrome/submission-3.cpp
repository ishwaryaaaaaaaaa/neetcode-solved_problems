class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.length() - 1;

        while (left < right) {
            char l = s[left];
            char r = s[right];

            if (!isalnum(l)) {
                left++;
                continue;
            }
            if (!isalnum(r)) {
                right--;
                continue;
            }

            if (tolower(l) != tolower(r)) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};