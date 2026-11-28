#include<iostream>
#include<vector>
class Solution {
public:
    std::vector<int> decrypt(std::vector<int>& code, int k) {
        std::vector<int> ret;
        if(k >0)
        {

            for(int i=0;i<code.size();i++)
            {
                int sum=0;
                for(int j=i+1;j<=k+i;j++)
                {
                    
                    sum+=code[j%code.size()];
                        
                }
                ret.push_back(sum);
            }
        }
        if(k <0)
        {
            int n =code.size();
            for(int i=0;i<code.size();i++)
            {
                int sum=0;
                for(int j=i-1;j>=k+i;j--)
                {
                    sum+=code[((j%n)+n)%n];
                }
                ret.push_back(sum);
            }
        }
        if(k==0)
        {
            for(int i =0;i<code.size();i++)
            {
                ret.push_back(0);
            }
        }
        return ret;
    }
};
int main()
{
    std::vector<int> input={5,7,1,4};
    Solution s;
    std::vector<int> ret=s.decrypt(input,-3);
    for(int i =0;i<ret.size();i++)
    {
        std::cout<<ret[i]<<std::endl;
    }
}