#include<iostream>
using namespace std;
 
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = list1;
        ListNode* tail = list1;
        ListNode* a = head;
        ListNode* b =head;
        while(tail->next)
        {
            tail = tail->next;
        }
        while(list2)
        {
            tail->next = list2;
            tail = tail->next;
            list2 = list2->next;
        }
        while(a)
        {
            b = a->next;
            while(b)
            {
                if(a->val>b->val)
                {
                    int tmp;
                    tmp = a->val;
                    a->val = b->val;
                    b->val = tmp;
                }
                b= b->next;
            }
            a = a->next;
        }
        while(head)
        {
            cout<<head->val<<endl;
            head = head->next;
        }
        
        return head;
    }
};

int main()
{
    ListNode *n3 = new ListNode(2);
    ListNode *n2 = new ListNode(3,n3);
    ListNode *n1 = new ListNode(1,n2);

     ListNode *n6 = new ListNode(6);
    ListNode *n5 = new ListNode(6,n6);
    ListNode *n4 = new ListNode(4,n5);

    Solution a;
    a.mergeTwoLists(n1,n4);
}