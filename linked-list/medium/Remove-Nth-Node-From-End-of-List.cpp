
 //Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 

#include<iostream>
#include<list>
#include<algorithm>

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* h=head;
        int i = 0;
        while(headnullptr)
        {
            i++;
            if(i==n)
            {

            }
            head=head->next;
        }
    }
};