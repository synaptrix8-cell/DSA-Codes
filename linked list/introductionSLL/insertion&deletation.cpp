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

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

Node *arr2List(vector<int> &nums)
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

// delete head...
Node *deleteHead(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

// delete tail...
Node *deleteTail(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    return head;
}

// delete an item in k th position....
Node *deleteAtKthPosition(Node *head, int k)
{
    if (head == NULL || k <= 0)
    {
        return NULL;
    }
    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node *curr = head->next;
    Node *prev = head;
    int cnt = 2;
    while (curr != NULL)
    {
        if (cnt == k)
        {
            prev->next = curr->next;
            delete curr;
            break;
        }
        prev = curr;
        curr = curr->next;
        cnt++;
    }
    return head;
}

// insert an node before head.....
Node *insertHead(Node *head)
{
    Node *newnode = new Node(5);
    newnode->next = head;
    head = newnode;
    return head;
}

// insert at the end...
Node *insertAtEnd(Node *head, int val)
{
    Node *newnode = new Node(val);
    Node *temp = head;
    if (head == NULL)
    {
        return newnode;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    return head;
}

// insert at kth position....
Node *insertAtKthPosition(Node *head, int val, int k)
{
    int cnt = 1;
    Node *newnode = new Node(val);
    Node *temp = head;
    if (k <= 0)
    {
        return NULL;
    }
    if (head == NULL && k == 1)
    {
        return newnode;
    }
    if (k == 1)
    {
        newnode->next = head;
        head = newnode;
        return head;
    }
    while (temp->next != NULL)
    {
        if (cnt == k - 1)
        {
            newnode->next = temp->next;
            temp->next = newnode;
        }
        temp = temp->next;
        cnt++;
    }
    return head;
}
