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

bool palindromeCheck(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    if (!head || !head->next)
    {
        return true;
    }

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    Node *curr = slow;
    Node *prev = NULL;
    while (curr)
    {
        Node *after = curr->next;
        curr->next = prev;
        prev = curr;
        curr = after;
    }
    // prev is at last node.And mid pointing to NULL..
    Node *left = head;
    Node*right=prev;
    while (right)
    {
        if (left->data != right->data)
        {
            return false;
        }
        left = left->next;
        right = right->next;
    }
    return true;
}

int main()
{
    vector<int> nums = {1,2,3,2,1};
    Node *head = arr2LL(nums);

    if (palindromeCheck(head))
    {
        cout << "it is palindrome.." << endl;
    }
    else
    {
        cout << "it is not palindrome.." << endl;
    }
    return 0;
}
