
#include<iostream>
#include<set>

 struct ListNode {
    int val;
    ListNode *next;
    // ListNode() : val(0), next(nullptr) {}
    // ListNode(int x) : val(x), next(nullptr) {}
    // ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    bool hasCycle(ListNode* head) {
        std::set<ListNode*> seen;
        while(head)
        {
            if(seen.count(head)==1)
                return 0;
            seen.insert(head);
            head=head->next;
        }
        return 1;
    }
};