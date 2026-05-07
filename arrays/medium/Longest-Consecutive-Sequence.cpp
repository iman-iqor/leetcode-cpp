#include <iostream>
#include <vector>
#include <map>
#include<algorithm>
using namespace std;

class Solution
{
public:
    int longestConsecutive(std::vector<int> &nums)
    {
        std::map<int,int> m;
        int i = 0;
        while(i < nums.size())
        {
            m[nums[i]] = 0;
            i++;
        }
        std::map<int,int>::iterator it = m.begin();
        std::map<int,int>::iterator it2;
        int len = 1;
        int count = 0;
        while(it != m.end())
        {
            it2 = it;
            ++it2;
            if(it2 == m.end())
            {
                if(count < len)
                    count = len;
                break;
            }
            // std::cout<<it->first<<std::endl;
            // std::cout<<it2->first<<std::endl;
            if(it->first +1 == it2->first)
            {
                len++;
            }
            else if(it->first != it2->first)
            {
                if(len > count)
                    count = len;
                len = 1;
            }
            else
            {
                if(count < len)
                    count = len;
            }
            // std::cout<<count<<std::endl;
            // std::cout<<std::endl;
            it++;
        }
        return count;
    }
};

int main()
{
    std::vector<int> v ;
    v.push_back(0);
    v.push_back(3);
    v.push_back(2);
    v.push_back(5);
    v.push_back(4);
    v.push_back(6);
    v.push_back(1);
    v.push_back(1);
    
    // v.push_back()
    Solution s;
    std::cout<<s.longestConsecutive(v)<<std::endl;
    return 0;
}