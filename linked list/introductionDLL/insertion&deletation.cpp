#include <bits/stdc++.h>
using namespace std;

// structure of the linked list...
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
        next = next1;
        back = back1;
    }

public:
    Node(int data1)
    {
        data = data1;
        Node *next = nullptr;
        Node *back = nullptr;
    }
};

// for printing linked list..
void print(Node *head)
{
    Node* temp=head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

// for array to linked list...
Node *arrToLinkedList(vector<int> &nums)
{
    Node *head = new Node(nums[0]);
    Node *temp = head;
    for (int i = 1; i < nums.size(); i++)
    {
        Node *newnode = new Node(nums[i], nullptr, temp);
        temp->next = newnode;
        temp = temp->next;
    }
    return head;
}

// deletation of head in DLL...
Node *deleteHead(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    Node *temp = head;
    head = head->next;
    head->back = nullptr;
    temp->next = nullptr;
    delete temp;
    return head;
}

// delete at tail...
Node *deleteTail(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *newtail = temp->back;
    newtail->next = nullptr;
    temp->back = nullptr;
    delete temp;
    return head;
}

// delete at Kth position....
Node *deleteKthPosition(Node *head, int k)
{
    if (head == NULL || k <= 0)
    {
        return head;
    }
    int cnt = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
        {
            break;
        }
        temp = temp->next;
    }
    if (temp == NULL)
    {
        return head;
    }
    if (temp->back == NULL)
    {
        if (temp->next == NULL)
        {
            return NULL;
        }
        head = head->next;
        head->back = nullptr;
        temp->next = nullptr;
        delete temp;
        return head;
    }
    else if (temp->next == NULL)
    {
        Node *newtail = temp->back;
        newtail->next = NULL;
        temp->back = NULL;
        delete temp;
        return head;
    }
    else
    {
        Node *prev = temp->back;
        Node *after = temp->next;
        prev->next = after;
        temp->back = NULL;
        temp->next = NULL;
        after->back = prev;
        delete temp;
        return head;
    }
    return head;
}

// Now INSERTING....

// insert at before head....
Node *insertBeforeHead(Node *head, int val)
{
    Node *newhead = new Node(val, head, nullptr);
    if (head == NULL)
    {
        return newhead;
    }
    head->back = newhead;
    return newhead;
}

// inserting before tail...
Node *insertBeforeTail(Node *head, int val)
{
    Node *temp = head;
    Node *newtail = new Node(val);
    if (head == NULL)
    {
        return newtail;
    }
    else if (temp->next == NULL)
    {
        temp->back = newtail;
        newtail->next = temp;
        return newtail;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *prev = temp->back;
    prev->next = newtail;
    temp->back = newtail;
    newtail->next = temp;
    newtail->back = prev;
    return head;
}

// inserting  before at Kth position......
Node *instertAtKthposition(Node *head, int val, int k)
{
    Node *temp = head;
    int cnt = 0;
    while (temp->next != NULL)
    {
        cnt++;
        if (cnt == k)
        {
            break;
        }
        temp = temp->next;
    }
    if (k == 1)
    {
        Node *newhead = new Node(val, head, nullptr);
        if (head == NULL)
        {
            return newhead;
        }
        head->back = newhead;
        return newhead;
    }
    Node *prev = temp->back;
    Node *newnode = new Node(val, temp, prev);
    prev->next = newnode;
    temp->back = newnode;
    return head;
}

//insert before node....
void insertBeforeNode(Node* node,int val){
   Node* prev=node->back;
   Node* newnode=new Node(val,node,prev);
   prev->next=newnode;
   node->back=newnode;
}

int main(){
    vector<int> nums={2,5,8,7};
    Node* head=arrToLinkedList(nums);
    insertBeforeNode(head->next->next->next,100);
    print(head);
    return 0;
}
