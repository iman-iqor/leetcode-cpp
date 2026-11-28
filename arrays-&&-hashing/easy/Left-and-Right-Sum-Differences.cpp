
#include<iostream>
#include<vector>
class Solution {
public:
    std::vector<int> leftRightDifference(std::vector<int>& nums) {
        std::vector<int> left;
        std::vector<int> right;
        int a=0;
        for(int i=0;i<nums.size();i++)
        {
            left.push_back(a);
            a+=nums[i];
        }
        a=0;
        // std::cout<<nums.size()<<std::endl;
        for(int i=nums.size()-1;i>=0;i--)
        {
            right.push_back(a);
            a+=nums[i];
        }
        // std::cout<<right.size()<<std::endl;
        
        std::vector<int> ret;
        int i=0;
        int j=right.size()-1;
        while(i<right.size()&&j>=0)
        {
            int diff=left[i]-right[j];
            if(diff<0)
                diff=diff*-1;
            ret.push_back(diff);
            i++;
            j--;
        }
        return ret;
    }
};
int main()
{
    std::vector<int> input={10,4,8,3};
    Solution s;
    std::vector<int>left=s.leftRightDifference(input);
    // std::cout<<left.size()<<std::endl;
    for(int i=0;i<left.size();i++)
    {
        std::cout<<left[i]<<std::endl;
    }
}