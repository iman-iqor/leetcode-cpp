#include <iostream>
#include <vector>

class Solution
{
public:
    int trap(std::vector<int> &height)
    {
        int water = 0;
        for(int i=0;i<height.size();i++)
        {
            int left=height[i];
            int right=height[i];

            int j= 0;
            while(j<i)
                left=std::max(left,height[j++]);
            j = i;
            while(j < height.size())
                right=std::max(right,height[j++]);

            water += std::min(left,right) - height[i];
        }
        
        return water;
    }
};




int main()
{
    std::vector<int> vec;
    vec.push_back(0);
    vec.push_back(2);
    vec.push_back(0);
    vec.push_back(3);
    vec.push_back(1);
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(3);
    vec.push_back(2);
    vec.push_back(1);
    Solution a;
    std::cout<<a.trap(vec)<<std::endl;

    
    
}