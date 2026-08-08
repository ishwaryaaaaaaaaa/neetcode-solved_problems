class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;

        for (char snr : s) {
            if (snr == '{' || snr == '[' || snr == '(') {
                stk.push(snr);
            }
            else {
                if (stk.empty()) {
                    return false;
                }
                char top1 = stk.top();
                stk.pop();
                if (top1 == '[' && snr != ']') {
                    return false;
                }
                else if (top1 == '{' && snr != '}') {
                    return false;
                }
                else if (top1 == '(' && snr != ')') {
                    return false;
                }
            }
        }
        return stk.empty();
    }
};
