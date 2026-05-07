#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
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
        i = v.size();
        i--;
        int j = 0;
        while(i >=0 )
        {
            v2[j++]= v[i--];
        }
        i=0;
        // int count = 0;
        while(i<v.size())
        {
            // std::cout<<v2[i];
            if(v[i] != v2[i])
                return false;
            i++;
        }
        // std::cout<<std::endl;
        // std::cout<<count<<std::endl;
        // std::cout<<v.size()<<std::endl;
    
    
        return true;
    }
    
};

int main()
{
    Solution s;
    std::string str="0P";
    std::cout<<s.isPalindrome(str)<<std::endl;
}