#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = nullptr;
    }
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(0);
        ListNode* h3 = dummy;

        while (list1 != NULL && list2 != NULL) {
            if (list1->val < list2->val) {
                h3->next = list1;
                list1 = list1->next;
            } else {
                h3->next = list2;
                list2 = list2->next;
            }
            h3 = h3->next;
        }

        if (list1 != NULL)
            h3->next = list1;
        else
            h3->next = list2;

        return dummy->next;
}

void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
   
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(3);
    list1->next->next = new ListNode(5);
    ListNode* list2 = new ListNode(2);
    list2->next = new ListNode(4);
    list2->next->next = new ListNode(6);

    ListNode* merged = mergeTwoLists(list1, list2);

    printList(merged);

    return 0;
}