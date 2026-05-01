#include <iostream>
#include <vector>
#include<algorithm>
#include<string>
#include<map>

class Solution
{
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string> &strs)
    {
        std::vector<std::vector<std::string>> ret;
        std::vector<std::string> sort = strs;
        std::map<std::string,std::vector<std::string>> m;
        int i = 0;
        while(i < strs.size())
        {
            std::sort(sort[i].begin(),sort[i].end());//sort the vector of string
            m[sort[i]].push_back(strs[i]);//use the sorted string as key and the original string as value
            i++;
        }
        for(const auto &p : m)
        {
            ret.push_back(p.second);

        }


        return ret;
    }
};

int main()
{
    std::vector<std::string> strs = {"act", "pots", "tops", "cat", "stop", "hat"};
    Solution s;
    std::vector<std::vector<std::string>> ret = s.groupAnagrams(strs);

    int i = 0;
    int j;
    while(i < ret.size())
    {
        j = 0;
        std::cout<<"{"<<std::endl;
        while(j < ret[i].size())
        {
            std::cout<<ret[i][j]<<std::endl;
            j++;
        }
        std::cout<<"}"<<std::endl;
        i++;
    }
}