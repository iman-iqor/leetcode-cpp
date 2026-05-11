#include<iostream>
#include<vector>
#include<cctype>

class Solution {
public:
    bool isPalindrome(std::string s) 
    {
        std::vector<char> v;
        int i = 0;
        while(i < s.size())
        {
            if(isalnum(s[i]))
                v.push_back(tolower(s[i]));
            i++;
        }
        std::vector<char> v2(v.size());
        i = 0;
        int len = v.size()-1;

        while(i < v.size())
        {
            v2[len] = v[i];
            i++;
            len--;
        }
        i = 0;
        while(i < v.size())
        {
            if(v[i] != v2[i])
                return false;
            i++;
        }
        return true;
        
    }
};
int main()
{
    Solution s;
    std::string str="race a car";
    std::cout<<s.isPalindrome(str)<<std::endl;
}