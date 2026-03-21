#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;

    ListNode(int x)
    {
        val = x;
        next = NULL;
    }
};

bool hasCycle(ListNode *head)
{
    if (head == NULL)
        return false;
    ;
    ListNode *slow = head;
    ListNode *fast = head;

    while (fast!= NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return true;
    }
    return false;
}

int main()
{

    ListNode *head = new ListNode(0);
    ListNode *one = new ListNode(1);
    ListNode *two = new ListNode(2);
    ListNode *three = new ListNode(3);

    head->next = one;
    one->next = two;
    two->next = three;
    three->next = one;

    cout << hasCycle(head);

    return 0;
}