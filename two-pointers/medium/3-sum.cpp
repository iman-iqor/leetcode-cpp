#include <iostream>
#include <vector>
#include <set>

class Solution
{
public:
    std::vector<std::vector<int>> threeSum(std::vector<int> &nums)
    {
        
        std::set<std::vector<int>> s;
        std::sort(nums.begin(),nums.end());
        int i = 1;
        while (i < nums.size())
        {
            int right = nums.size() - 1;
            int left = 0;
            while (i > left && i<right)
            {
                int sum=nums[i] + nums[left] + nums[right];
                // std::cout<<"this is sum: "<<sum<<std::endl;
                if (sum == 0 )
                {
                    s.insert({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                }
                else if (sum < 0)
                    left++;
                else
                    right--;
            }
            i++;
        }
        // std::cout<<"the set size: "<<s.size()<<std::endl;
        std::vector<std::vector<int>> ret(s.begin(),s.end());
        return ret;
    }
};

int main()
{
    Solution s;
    std::vector<int> v={-1,0,1,2,-1,-4};
    std::vector<std::vector<int>> ret = s.threeSum(v);
    int i = 0;
    while(i < ret.size())
    {
        int j = 0;
        while(j < 3)
        {
            std::cout<<ret[i][j];
            j++;
        }
        std::cout<<std::endl;
        i++;
    }
}