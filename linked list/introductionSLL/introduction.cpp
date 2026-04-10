#include<bits/stdc++.h>
using namespace std;

//this is the main struct....
class Node{
    public:
    int data;
    Node* next;
    
    public:
    Node(int data1,Node*next1){
        data=data1;
        next=next1;
    }
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

//convert array to linked list...
Node* arr2list(vector<int>&arr){
    Node* head=new Node(arr[0]);
    Node* temp=head;
    for(int i=1;i<arr.size();i++){
        Node* newnode=new Node(arr[i]);
        temp->next=newnode;
        temp=newnode;
        
    }
    return head;
}

//find length of linked list...
int lengthOfLl(Node* head){
    int cnt;
    Node*temp=head;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}

//removes head of a linked list...
Node* removeHead(Node* head){
    if(head==NULL){
        return head;
    }
    if(head->next==nullptr){
        return NULL;
    }
    Node*temp=head;
    head=head->next;
    delete temp;
    return head;
}


int main(){
    vector<int> arr={2,5,8,7};
    Node* head=arr2list(arr);
   // Node* temp=head;
    // while(temp != NULL){
    //     cout<<temp->data<<" ";
    //     temp=temp->next;
    // }
     head=removeHead(head);
     cout<<head->data;
    
}
