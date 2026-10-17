class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        vector<char> m;
        int left1 = 0;
        int left2 = 0;

        // Loop while at least one string still has characters left
        while (left1 < word1.length() || left2 < word2.length()) {
            if (left1 < word1.length() && left2 < word2.length()) {
                m.push_back(word1[left1]);
                m.push_back(word2[left2]);
                left1++;
                left2++;
            } 
            else if (left1 < word1.length()) {
                m.push_back(word1[left1]);
                left1++;
            } 
            else if (left2 < word2.length()) {
                m.push_back(word2[left2]);
                left2++;
            }
        }

        // Convert the vector of characters into a final string and return
        return string(m.begin(), m.end());
    }
};