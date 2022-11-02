#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node(){
        int value=this->data;
        if (this->next!=NULL)
        {
            delete next;
            this->next=NULL;
            /* code */
        }
        
    }
   
};
 void insert_head(int data,Node*& head){
        Node* new_head= new Node(data);
        new_head->next=head;
        head=new_head;
    }
void insertAtposition(Node* &head,int data,int position){
    if(position==1)
    {
        insert_head(data,head);
        return;
    }
    Node* add=new Node(data);
    int cnt=1;
    Node* ptr=head;
    while(cnt<position-1){
        ptr=ptr->next; 
        cnt++;
    }
    add->next=ptr->next;
    ptr->next=add;
    
}
void print(Node* &head){
    Node* temp=head;
      while (temp != NULL)
    {
        cout << temp->data << " " << temp->next << endl;
        temp=temp->next;
    }
    cout<<endl;
}
void deleteNode(Node* &head,int position){
     if(position==1)
    {    Node* temp=head;
     head=head->next;
     temp->next=NULL;
        delete temp ;
       
        return;
    }
    int cnt=1;
    Node* ptr=head;
    while(cnt<position-1){
        ptr=ptr->next; 
        cnt++;
    }
    Node* temp=ptr->next;
    ptr->next=temp->next;
    temp->next=NULL;
    delete temp;

   
}
int main()
{   Node *head = new Node(5);
    Node *second = new Node(8);
    Node *third = new Node(7);
    Node *fourth = new Node(44);
    Node *fifth = new Node(13);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
        print(head);
    insert_head(125,head);
    print(head);
  
    insertAtposition(head,45,1);
        print(head);
        deleteNode(head,7);
          print(head);
    return 0;
}