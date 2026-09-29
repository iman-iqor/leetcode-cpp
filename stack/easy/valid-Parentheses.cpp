#include<iostream>
#include<stack>
#include<algorithm>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<int> stack;
        int i =0;
        while(i<s.size())
        {
            if(s[i]=='{' || s[i]=='[' || s[i]=='(')
                stack.push(s[i]);
            else if(s[i]=='}' || s[i]==']' || s[i]==')')
            {
                if(stack.empty())
                    return false;
                if((stack.top()=='{' && s[i]=='}')||(stack.top()=='(' && s[i]==')')||(stack.top()=='[' && s[i]==']'))
                    stack.pop();
                else
                    stack.push(s[i]);
            }
            i++;
        }

        if(!stack.empty())
            return false;
        return true;
    }
};

int main()
{
    std::string str="(])";
    Solution s;
    std::cout<<s.isValid(str)<<std::endl;
}