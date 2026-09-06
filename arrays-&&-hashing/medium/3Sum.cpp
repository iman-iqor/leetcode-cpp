#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

class Solution
{
public:
    std::vector<std::vector<int>> threeSum(std::vector<int> &nums)
    {
        std::vector<std::vector<int>> ret;
        int sum = 0;
        int i = 0;
        sort(nums.begin(), nums.end());
        while (i < nums.size())
        {
            // skip duplicate i
            if(i > 0 && nums[i] == nums[i - 1])
            {
                i++;
                continue;
            }
            int left = i + 1;
            int right = nums.size() - 1;
            while (left < right)
            {
                sum = nums[left] + nums[right];
                if (-nums[i] == sum)
                {
                    std::vector<int> v;
                    v.push_back(nums[i]);
                    v.push_back(nums[left]);
                    v.push_back(nums[right]);
                    ret.push_back(v);
                    // skip duplicate left
                    left++;
                    right--;
                    while(left < right && nums[left] == nums[left - 1])
                        left++;

                    // skip duplicate right
                    while(left < right && nums[right] == nums[right + 1])
                        right--;
                }
                else if (sum < -nums[i])
                {
                    left++;
                }
                else
                {
                    right--;
                }
                
            }
            i++;
        }

     
        return ret;
    }
};

int main()
{
    std::vector<int> v = {-1,0,1,2,-1,-4};
    Solution s;
    std::vector<std::vector<int>> ret;
    ret = s.threeSum(v);
    int i = 0;
    int j = 0;

    std::cout << "[";

    while (i < ret.size())
    {
        j = 0;
        std::cout << "{";
        while (j < ret[i].size())
        {
            std::cout << ret[i][j] << ",";
            j++;
        }
        std::cout << "}";
        i++;
    }
    std::cout << "]" << std::endl;
}
