class Solution {
public:

string longestCommonPrefix(vector<string>& strs) {
    sort(strs.begin(), strs.end());
    string first = strs[0];
    string last = strs[strs.size() - 1];
    int j = 0;
    while (j < min(first.length(), last.length()) && first[j] == last[j]) {
        j++;
    }
    return first.substr(0, j);
}
};