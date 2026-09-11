#include<vector>
#include<iostream>
#include<algorithm>

class Solution {
public:

    std::string encode(std::vector<std::string>& strs) {
        std::string str;
        int i = 0;
        // std::cout<<"this is the size of strs: "<<strs.size()<<std::endl;
        while(i < strs.size())
        {
            str+= std::to_string(strs[i].size())+"#"+strs[i];
            i++;
        }
        return str;
    }

    std::vector<std::string> decode(std::string s) {
        int i = 0;
        std::vector<std::string> ret;
        while(i<s.size())
        {
            int j = i;
            std::string l;
            while(s[j] != '#')
            {
                l+=s[j];
                j++;
            }
            int len = std::stoi(l);
            int size_of_len = std::to_string(len).size()+1;
            // std::cout<<"this is the len: "<<len<<" and this is size of len: "<<size_of_len <<std::endl;
            ret.push_back(s.substr(i+size_of_len,len));
            i+=len+size_of_len;
            // std::cout<<"this is i: "<<i<<std::endl;
            
        }
       
        return ret;
    }
};

int main()
{
    Solution s;
    std::vector<std::string> v={"we","say",":","yes","!@#$%^&*()"};
    std::string str=s.encode(v);
    std::cout<<str<<std::endl;
    std::vector<std::string> ve = s.decode(str);
    int i = 0;
    while(i < ve.size())
    {
        std::cout<<ve[i]<<std::endl;
        i++;
    }
}