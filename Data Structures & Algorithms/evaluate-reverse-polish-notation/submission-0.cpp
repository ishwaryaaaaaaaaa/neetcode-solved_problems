class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (string token : tokens) {

            // If it is a number, push it
            if (token != "+" && token != "-" &&
                token != "*" && token != "/") {

                st.push(stoi(token));
            }

            // If it is an operator
            else {
                int b = st.top();
                st.pop();

                int a = st.top();
                st.pop();

                int result;

                if (token == "+")
                    result = a + b;
                else if (token == "-")
                    result = a - b;
                else if (token == "*")
                    result = a * b;
                else
                    result = a / b;

                // Push the result back
                st.push(result);
            }
        }

        return st.top();
    }
};
