#include <iostream>
#include <vector>
#include <map>
#include<algorithm>
#include<set>
using namespace std;

class Solution
{
public:
    int longestConsecutive(std::vector<int> &nums)
    {
        if(nums.size()==0)
            return 0;
        int count=1;
        int highestcount=0;
        std::sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(i+1<nums.size()&& nums[i]==nums[i+1])
                continue;
            if(i+1<nums.size()&&nums[i]==nums[i+1]-1)
            {
                count++;
            }
            else
                count=1;
            if(highestcount<count)
            {
                highestcount=count;
            }
        }
       
        return highestcount;
    }
};

int main()
{
    Solution s;
    std::vector<int> v={0,3,2,5,4,6,1,1};
    std::cout<<s.longestConsecutive(v)<<std::endl;
}