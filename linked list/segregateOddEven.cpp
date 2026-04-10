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

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* segregateOddEven(Node *head)
{
    // Node *temp = head;
    // Node* pmt=head;
    // while (temp && temp->next)
    // {
    //     Node *after = pmt->next;
    //     Node *before = temp->next;
    //     temp = temp->next->next;                   //this works but it will give run time error ....
    //     Node *later = temp->next;
    //     before->next = later;
    //     pmt->next = temp;
    //     temp->next = after;
    //     temp =before;
    //     pmt=pmt->next;
    // }
    // return head;



     Node*odd=head;
     Node*even=head->next;
     Node*evenhead=even;
     while(even&&even->next){
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
     }
     odd->next=evenhead;
     return head;


}

int main()
{
    vector<int> nums = {1,2,3,4,5};
    Node *head = arr2LL(nums);
    head= segregateOddEven(head);
    print(head);
    return 0;
}
