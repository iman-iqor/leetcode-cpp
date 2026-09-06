#include <iostream>
#include <vector>
#include <map>

class Solution
{
public:
    int longestConsecutive(std::vector<int> &nums)
    {
        std::map<int,int> m;
        int i =0;
        while(i < nums.size())
        {
            m[nums[i]] = 0;
            i++;
        }
        std::map<int,int>::iterator it= m.begin();
        std::map<int,int>::iterator it2;
        int count = 0;
        int len = 1;
        while(it != m.end())
        {   
            it2 = it;
            it2++;
            if(it2 == m.end())
            {
                std::cout<<"a"<<std::endl;
                std::cout<<count<<std::endl;
                std::cout<<len<<std::endl;
                if(count < len)
                    count = len;
                return count;
            }
            if(it->first + 1 == it2->first)
            {
                len++;
            }
            else if(it->first +1 != it2->first)
            {
                if(count < len)
                    count = len;
                len = 1;
            }
            it++;

        }

        return count;
    }
};

int main()
{
    std::vector<int> v;
    // v.push_back(0);
    // v.push_back(3);
    // v.push_back(7);
    // v.push_back(2);
    // v.push_back(5);
    // v.push_back(8);
    // v.push_back(4);
    // v.push_back(6);
    // v.push_back(0);
    // v.push_back(1);

    v.push_back(1);
    v.push_back(2);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    Solution s;
    std::cout<<s.longestConsecutive(v)<<std::endl;

}