#include <iostream>
#include <string>
class Solution
{
public:
    bool isAnagram(std::string s, std::string t)
    {
        if(s.size() == t.size())
        {
            int i = 0;
            int count = 0;
            while(i < s.size())
            {
                int j = 0;
                while(j < t.size())
                {
                    if(s[i] == t[j])
                    {
                        t[j] = 0;
                        count++;
                        break;
                    }
                    j++;
                }
                if(count  == s.size())
                    return true;
                i++;
            }
        }
        return false;
    }
};

int main()
{
    std::string s = "racecar";
    std::string t = "carrace";
    Solution a;
    std::cout<<a.isAnagram(s,t)<<std::endl;
}