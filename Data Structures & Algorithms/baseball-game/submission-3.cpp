class Solution {
public:
    int calPoints(vector<string>& operations) {
        // u can do this easily by using stack 
        stack<int>stk ; 
        vector<int>ans; 
        for(int i = 0 ; i < operations.size() ; i++){
            if(operations[i] =="C"){
                stk.pop(); 
            }
            else if(operations[i]=="D"){
                stk.push(2* stk.top()); 
            }
            else if(operations[i]=="+"){
                int top1 = stk.top(); 
                stk.pop(); 
                int top2 = stk.top(); 
                stk.push(top1); 
                stk.push(top1+top2); 
            }
            else{
                stk.push(stoi(operations[i]));
            }

        }
        int sum = 0 ; 
        while(!stk.empty()){
            sum+= stk.top(); 
            stk.pop(); 
        }
        return sum ; 


    }
};