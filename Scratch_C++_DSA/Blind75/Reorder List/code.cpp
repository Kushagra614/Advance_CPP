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

ListNode *reorderList(ListNode *head)
{
    deque<ListNode *> dq;
    ListNode *curr = head;
    while (curr != NULL)
    {
        dq.push_back(curr);
        curr = curr->next;
    }

    ListNode *ll = head;
    while (!dq.empty())
    {
        ListNode *fro = dq.front();
        dq.pop_front();
        ll->next = fro;
        ll = ll->next;

        if (!dq.empty())
        {
            ListNode *bak = dq.back();
            dq.pop_back();
            ll->next = bak;
            ll = ll->next;
        }
    }
    ll->next = NULL;
    return head;
}

void printLL(ListNode *head)
{
    ListNode *temp = head;

    while (temp != nullptr)
    {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{

    ListNode *head = new ListNode(1);
    ListNode *one = new ListNode(2);
    ListNode *two = new ListNode(3);
    ListNode *three = new ListNode(4);
    ListNode *four = new ListNode(5);

    head->next = one;
    one->next = two;
    two->next = three;
    three->next = four;

    ListNode *ans = reorderList(head);
    printLL(ans);

    return 0;
}