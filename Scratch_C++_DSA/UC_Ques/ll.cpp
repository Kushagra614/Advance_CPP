#include<iostream>
#include<bits/stdc++.h>
using namespace std;


/*
we have a sinh;y ll and we have to determine that is therer a cycle present there otr not 
it can be empty, 1 node or etc nodes


test case [1-> 2-> 3-> 4->2]

brute approach



*/

struct listnode
{
    int val;
    listnode* next;

    listnode(int x)
    {
        val = x;
        next = nullptr;

    }
};

bool iscycle(listnode* head)
{
    unordered_set<listnode*>vis;
    listnode* curr = head;

    while(curr!=NULL)
    {
        if(vis.find(curr) != vis.end())
        {
            return true;
            break;
        }

        vis.insert(curr);
        curr = curr->next;
    }

    return false;


}

bool optapp(listnode* head)
{
    listnode* slow = head;
    listnode* fast = head;

    while(slow->next != nullptr && fast->next->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast) return true;
        

    }
    return false;
}




int main(){

    listnode* head = new listnode(1);
    listnode* node1 = new listnode(2);
    listnode* node2 = new listnode(3);
    listnode* node3 = new listnode(4);

    head->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node1;


    if(optapp(head))
    {
        cout<<"True";
    }
    else{
        cout<<"False";
    }

   return 0;
}