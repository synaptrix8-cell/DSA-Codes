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

int findMiddle(Node *head)
{
    // int cnt = 0;
    // Node *temp = head;
    // while (temp)
    // {
    //     cnt++;
    //     temp = temp->next;
    // }                            //this question can be optimized as slow fast pointer...
    // temp = head;
    // int mid=cnt/2;
    // while (mid--)
    // {
    //     temp = temp->next;
    // }

    // return temp->data;

    Node*slow=head;
    Node*fast=head;
    if(!fast||!fast->next){
        return head->data;
    }
    
    while(fast&&fast->next){
        fast=fast->next->next;
        slow=slow->next;
    }
   return slow->data;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    Node *head = arr2LL(nums);
    cout << findMiddle(head) << endl;
    return 0;
}
