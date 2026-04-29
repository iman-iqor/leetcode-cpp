#include <iostream>
#include <vector>
class Solution
{
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target)
    {
        int i = 0;
                    std::vector<int> v;

        while(i < nums.size())
        {
            int j = i+1;
            while(j < nums.size())
            {
                int tmp = nums[i] + nums[j];
                if(tmp == target)
                {
                    v.push_back(i);
                    v.push_back(j);
                    return v;
                }
                j++;
            }
            i++;
        }
        return v;
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