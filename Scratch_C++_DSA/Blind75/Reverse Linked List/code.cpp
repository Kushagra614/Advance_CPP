#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode* next;

    ListNode (int x){
        val = x;
        next = nullptr;
    }
};

ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while(curr!=NULL)
        {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }


int main(){

   ListNode* head = new ListNode(1); 
   ListNode* one = new ListNode(2); 
   ListNode* two = new ListNode(3); 
   ListNode* three = new ListNode(4); 

   head->next = one;
   one->next = two;
   two->next = three;

   ListNode* temp = reverseList(head);
while(temp != NULL)
{
    cout << temp->val << " ";
    temp = temp->next;
}
   return 0;
}