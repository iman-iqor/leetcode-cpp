#include <iostream>
#include <vector>

class Solution
{
public:
    bool hasDuplicate(std::vector<int> &nums)
    {
        int i = 0;
        while (i < nums.size())
        {

            int j = 0;
            while (j < nums.size())
            {

                if (i != j &&nums[i] == nums[j])
                {
                    return 1;
                }
                j++;
            }
            i++;
        }
        return 0;
    }
};

int main()
{
    std::vector<int> a{100, 200, 300, 100, 500, 600, 200};

    Solution s;
    std::cout << s.hasDuplicate(a) << std::endl;
}