#include <iostream>
#include <vector>
#include <algorithm>
#include<set>
#include<map>

class Solution
{
public:
    std::vector<int> topKFrequent(std::vector<int> &nums, int k)
    {
        std::vector<int> v;
        std::map<int,int> m;
        int i = 0;
        while(i < nums.size())
        {
            m[nums[i]]++;

            i++;
        }

       std::vector<std::pair<int,int>> vec(m.begin(),m.end());
       i = 0;
       while(i < vec.size())
       {
            int j = i+1;
            while(j < vec.size())
            {
                if(vec[i].second<vec[j].second)
                {
                    std::pair<int,int> tmp;
                    tmp = vec[i];
                    vec[i] = vec[j];
                    vec[j] = tmp;
                }
                j++;
            }
            i++;
       }

      
       i = 0;
       while(i < k)
       {
            v.push_back(vec[i].first);
            // std::cout<<v[i]<<std::endl;
            i++;

       }
        
        return v;
    }
};

int main()
{
    std::vector<int> nums ={1,2,2,3,3,3,3};
    Solution s;
    std::vector<int> v= s.topKFrequent(nums,2);

}