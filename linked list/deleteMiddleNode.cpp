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

Node *findMiddle(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    if (!fast || !fast->next)
    {
        return NULL;
    }
    Node *prev = NULL;
    while (fast && fast->next)
    {
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
    }
    Node *mid = slow;
    Node *after = mid->next;
    prev->next = after;
    delete mid;
    return head;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    Node *head = arr2LL(nums);
    head = findMiddle(head);
    print(head);
    return 0;
}
