class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;  // one stack, stores indices
        vector<int> ans(temperatures.size(), 0);  // result array

for(int i = 0; i < temperatures.size(); i++){
    while(!st.empty() && temperatures[i] > temperatures[st.top()]){
        int idx = st.top(); st.pop();
        ans[idx] = i - idx;
    }
    st.push(i);
}
return ans;
    }
};