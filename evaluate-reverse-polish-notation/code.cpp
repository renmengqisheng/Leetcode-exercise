class Solution {
public:
    int evalRPN(vector<string> &tokens) {
        if(tokens.empty()) return 0;
        stack<int> s;
        for(int i = 0; i < tokens.size(); i++)
        {
            if(tokens[i] == "+")
            {
                int num1 = s.top(); s.pop();
                int num2 = s.top(); s.pop();
                s.push(num2+num1);
            }
            else if(tokens[i] == "-")
            {
                int num1 = s.top(); s.pop();
                int num2 = s.top(); s.pop();
                s.push(num2-num1);
            }
            else if(tokens[i] == "*")
            {
                int num1 = s.top(); s.pop();
                int num2 = s.top(); s.pop();
                s.push(num2*num1);
            }
            else if(tokens[i] == "/")
            {
                int num1 = s.top(); s.pop();
                int num2 = s.top(); s.pop();
                s.push(num2/num1);
            }
            else s.push(atoi(tokens[i].c_str()));
        }
        return s.top();
    }
};
