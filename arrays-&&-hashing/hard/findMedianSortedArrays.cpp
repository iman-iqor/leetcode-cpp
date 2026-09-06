#include<iostream>
#include<vector>
using namespace std;

//merge
//sort
//two cases to find median/pair;impare odd even
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        for(int i = 0;i < nums2.size();i++)
        {
            nums1.push_back(nums2[i]);
        }
        int i = 0;

        while( i < nums1.size())
        {
            int j = i+1;
            while(j < nums1.size())
            {
                if(nums1[i] > nums1[j])
                {
                    int tmp = nums1[j];
                    nums1[j] = nums1[i];
                    nums1[i] = tmp;
                }

                j++;
            }
            i++;
        }
        if(nums1.size() % 2 == 0 )
        {
            
            double index = nums1.size()/2;
            double index1 = index -1;
            
            double ret = static_cast<double>(nums1[index]+nums1[index1]) /2;
            return ret;

        }
        else
        {
            int index = nums1.size() / 2;
            return(nums1[index]);
        }
        
        
        
    }
};

int main()
{
    vector<int> a = {1,3};
    vector<int> b = {2};
    Solution c;
    cout<<c.findMedianSortedArrays(a,b)<<endl;
}