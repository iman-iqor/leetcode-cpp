#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int size = nums.size();
        for(int i = 0;i < nums.size();)
        {
            if(nums[i] == val)
                nums.erase(nums.begin() + i);
            else
                i++;
        }
        return nums.size();
    }
};
int main()
{
    std::vector<int> v = {1, 2, 3, 2, 4};
    Solution a;
    a.removeElement(v,2);
    

}