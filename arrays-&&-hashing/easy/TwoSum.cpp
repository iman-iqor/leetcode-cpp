#include <iostream>
#include <vector>
#include<map>
#include<algorithm>
class Solution
{
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target)
    {
        std::map<int,int> map;
        int i = 0;
        while(i < nums.size())
        {
            int complement=target-nums[i];
            if(map.find(complement) != map.end())
                return {map[complement],i};
            map[nums[i]]=i;
            i++;
        }
        return {};
    }
};

int main()
{
    std::vector<int> v={5,5};
    int target = 10;
    std::vector<int> a ;
    Solution s;
    a = s.twoSum(v,target);
      std::cout<<a[0]<<std::endl;
        std::cout<<a[1]<<std::endl;

   
}