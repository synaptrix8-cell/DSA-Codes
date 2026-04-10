#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node *arr2Ll(vector<int>&nums){
    Node* head=new Node(nums[0]);
    Node* temp=head;
    for(int i=0;i<nums.size();i++){
        Node* newNode=new Node(nums[i]);
        temp->next=newNode;
        temp=temp->next;
    }
    return head;
}

void printf(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
  Node*temp;
bool palindromCheckByRecursion(Node* head){
     if(temp->next==NULL){
        return;
     }
     palindromCheckByRecursion(temp->next);

}