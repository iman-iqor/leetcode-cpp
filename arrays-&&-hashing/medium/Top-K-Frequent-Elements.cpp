#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        std::map<int,int> map;
        std::vector<int> ret;
        for(int i = 0;i < nums.size();i++)
        {
            map[nums[i]]++;
        }

        std::vector<std::pair<int,int>> vect(map.begin(),map.end());
        
        int i = 0;
        while(i<vect.size())
        {
            int j = i+1;
            while(j<vect.size())
            {
                if(vect[i].second < vect[j].second)
                {
                    std::pair<int,int> tmp = vect[i];
                    vect[i]=vect[j];
                    vect[j]=tmp;
                }
                j++;
            }
            i++;

        }
        // for(int i = 0;i < vect.size();i++)
        // {
        //     std::cout<<vect[i].first<<","<<vect[i].second<<std::endl;
        // }
        for(int i=0;i < k;i++)
        {
            ret.push_back(vect[i].first);
        }

        return ret;
    }
};

int main()
{
    std::vector<int> vect={7,9,7,10,10,7};
    Solution s;
    std::vector<int> vec = s.topKFrequent(vect,1);
    for(int i = 0;i < vec.size();i++)
    {
        std::cout<<vec[i]<<std::endl;
    }

    
}