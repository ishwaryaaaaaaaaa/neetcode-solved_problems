class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;

        for (char snr : s) {
            while (!stk.empty()) {
                if (snr == '{' || snr == '[' || snr == '(') {
                    stk.push(snr);
                }
                else {
                    char top1 = stk.top();
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
        }
        return true;
    }
};
