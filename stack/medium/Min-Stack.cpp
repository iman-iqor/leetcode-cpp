#include<iostream>
#include<vector>
#include<algorithm>

class MinStack {
public:
    int min;
    std::vector<int> v;
    MinStack() {
        min=0;
    }
    
    void push(int val) {
        if(val<min)
        {
            min=val;
        }
        v.push_back(val);
    }
    
    void pop() {
        if(!v.empty())
            v.pop_back();
    }
    
    int top() {
        if(!v.empty())
            return v[v.size()-1];
        return NULL;
    }
    
    int getMin() {
        if(v.empty())
            return NULL;
        int i=0;
        min=v[0];
        while(i<v.size())
        {
            min=std::min(min,v[i]);
            i++;
        }
        return min;
    }
};

int main()
{
    MinStack s;

}