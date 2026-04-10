#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        Node *next = next1;
    }

public:
    Node(int data1)
    {
        data = data1;
        Node *next = nullptr;
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
        temp = temp->next;
    }
    return head;
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node *reverseSingly(Node *head)
{
    Node *before = NULL;
    Node *temp = head;
    while (temp != NULL)
    {
        Node *after = temp->next;
        temp->next = before;
        before = temp;
        temp = after;
    }
    return before;
}

Node *add1(Node *head, int val)
{
    Node *temp = head;
    int residue = val;
    Node*last=NULL;
    while (temp)
    {
        int sum = residue;
        sum += temp->data;
        temp->data = sum % 10;
        residue = sum / 10;
        last=temp;
        temp = temp->next;
    }
    if (residue != 0)
    {
        Node *newnode = new Node(residue);
        last->next = newnode;
    }
    return head;
}

int main()
{
    vector<int> nums = {9,9,9,9};
    Node *head = arr2LL(nums);
    head = reverseSingly(head);
    head = add1(head, 1);
    head = reverseSingly(head);
    print(head);
    return 0;
}
