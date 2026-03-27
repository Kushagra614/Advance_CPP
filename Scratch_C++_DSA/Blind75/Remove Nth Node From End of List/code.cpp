#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x)
    {
        val = x;
        next = nullptr;
    }
};

void printList(ListNode* head)
{
    while(head != NULL)
    {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

ListNode *removeNthFromEnd(ListNode *head, int n)
{
    ListNode *temp = head;
    int nodes = 0;
    while (temp != NULL)
    {
        nodes++;
        temp = temp->next;
    }

    int nodestodel = nodes - n + 1;

    if (nodestodel == 1) return head->next;

    ListNode* curr = head;
    int count = 1;

    while (curr != NULL) {
        if (count == nodestodel - 1) {
            curr->next = curr->next->next;
            break; 
        }
        curr = curr->next;
        count++;
    }

    return head;
}

int main()
{

    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "Original List: ";
    printList(head);

    int n = 2;
    head = removeNthFromEnd(head, n);
    printList(head);

    return 0;
}