#include <iostream>
#include <string>
#include <vector>
// class Solution
// {
// public:
//     std::vector<int> productExceptSelf(std::vector<int> &nums)
//     {
//         std::vector<int> ret;
//         int i = 0;
//         while(i < nums.size())
//         {
//             int j = 0;
//             int tmp = 1;
//             while(j < nums.size())
//             {
//                 if(j != i)
//                 {
//                     // std::cout<<i<<std::endl;
//                     // std::cout<<j<<std::endl;
//                     tmp*=nums[j];
//                 }
                
//                 j++;
//             }
//             ret.push_back(tmp);
//             // std::cout<<std::endl;
//             i++;
//         }
//         return ret;
//     }
// };
class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<int> res(n, 1);//n is the size of the input array, and we initialize the result vector with 1s.

        // Step 1: prefix products
        int prefix = 1;
        for(int i = 0; i < n; i++) {
            res[i] = prefix;
            prefix *= nums[i];
        }

        // Step 2: suffix products
        int suffix = 1;
        for(int i = n - 1; i >= 0; i--) {
            res[i] *= suffix;
            suffix *= nums[i];
        }

        return res;
    }
};

int main()
{
    std::vector<int> a = {1,2,4,6};
    Solution s;
    std::vector<int> ret = s.productExceptSelf(a);
    int i = 0;
    while(i < ret.size())
    {
        std::cout<<ret[i]<<std::endl;
        i++;
    }
}