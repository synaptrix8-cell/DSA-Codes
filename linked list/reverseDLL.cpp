#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *back;

public:
    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        Node *next = next1;
        Node *back = back1;
    }

public:
    Node(int data1)
    {
        data = data1;
        Node *next = nullptr;
        Node *back = nullptr;
    }
};

Node *arr2LL(vector<int> &nums)
{
    Node *head = new Node(nums[0]);
    Node *temp = head;
    for (int i = 1; i < nums.size(); i++)
    {
        Node *newnode = new Node(nums[i]);
        temp->next = newnode;
        newnode->back = temp;
        temp = temp->next;
    }
    return head;
}

void print(Node *head)
{
    Node*temp=head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp=temp->next;
    }
    cout << endl;
}

Node *reverseDll(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *temp = head;
    Node *last = temp->back;
    while (temp != NULL)
    {
        last = temp->back;
        temp->back = temp->next;
        temp->next = last;
        temp = temp->back;
    }
    return last->back;
}
int main()
{
    vector<int> nums = {2, 3, 4, 5, 6, 7};
    Node *head = arr2LL(nums);
    print(head);
    cout<<"yooooo babes...."<<endl;
    head=reverseDll(head);
    print(head);
    return 0;
}