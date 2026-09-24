#include <iostream>
#include <vector>

class Solution
{
public:
    std::vector<int> twoSum(std::vector<int> &numbers, int target)
    {
        int i = 0;
        int j = numbers.size()-1;
        while(i<=j)
        {
            int sum=numbers[i]+numbers[j];
            if(sum==target)
                return{i+1,j+1};
            if(sum<target)
                i++;
            else
                j--;
        }
        return{};
    }
};
int main()
{
    Solution s;
    std::vector<int> v={1,1,3,4};
    std::vector<int> ret=s.twoSum(v,2);
    for(int i = 0;i<ret.size();i++)
    {
        std::cout<<ret[i]<<std::endl;
    }
}