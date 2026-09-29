#include<string>
#include<algorithm>
#include<iostream>


class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
       std::sort(s.begin(),s.end());
       std::sort(t.begin(),t.end());
       if(s==t)
            return true;
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