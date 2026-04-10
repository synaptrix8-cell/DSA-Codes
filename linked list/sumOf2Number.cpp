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

void print(Node *head3)
{
    while (head3 != NULL)
    {
        cout << head3->data << " ";
        head3 = head3->next;
    }
    cout << endl;
}

Node *sum2Num(Node *head, Node *head1)
{
    Node *t1 = head;
    Node *t2 = head1;
    Node *dummyNode = new Node(-1);
    Node *current = dummyNode;
    int residue = 0;
    while (t1 != NULL || t2 != NULL)
    {
        int sum = residue;
        if (t1 != NULL)
        {
            sum += t1->data;
        }
        if (t2 != NULL)
        {
            sum += t2->data;
        }

        Node *newnode = new Node(sum % 10);
        current->next = newnode;
        residue = sum / 10;
        current = current->next;
        if (t1 != NULL)
        {
            t1 = t1->next;
        }
        if (t2 != NULL)
        {
            t2 = t2->next;
        }
    }
    if (residue != 0)
    {
        Node *newnode = new Node(residue);
        current->next = newnode;
    }
    return dummyNode->next;
}

int main()
{
    vector<int> nums = {2, 4, 3};
    vector<int> nums1 = {5, 6, 4};
    Node *head = arr2LL(nums);
    Node *head1 = arr2LL(nums1);
    Node *head3 = sum2Num(head, head1);
    print(head3);
    return 0;
}