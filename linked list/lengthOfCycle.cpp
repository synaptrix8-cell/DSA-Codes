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
        next = next1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
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

int lengthOfCycle(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            int cnt = 1;
            slow = slow->next;
            while (slow != fast)
            {
                slow = slow->next;
                cnt++;
            }
            return cnt;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    Node *head = arr2LL(nums);
    head->next->next->next->next->next->next = head->next->next;
    cout << lengthOfCycle(head) << endl;
    return 0;
}
