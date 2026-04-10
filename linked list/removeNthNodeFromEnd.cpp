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

Node *removeNthNode(Node *head, int n)
{
    Node *slow = head;
    Node *fast = head;
    int cnt = n;
    if (!head || !head->next)
    {
        return NULL;
    }
    while (n--)
    {
        fast = fast->next;
    }
    if (!fast)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    while (fast->next != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }
    Node *toDelete = slow->next;
    slow->next = slow->next->next;
    delete toDelete;
    return head;
}

int main()
{
    vector<int> nums = {
        1,
        2,
    };
    Node *head = arr2LL(nums);
    head = removeNthNode(head, 2);
    print(head);
    return 0;
}
