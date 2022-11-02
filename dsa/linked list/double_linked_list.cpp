#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;
    node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
    ~node(){
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
    }
};
void InsertAtHead(node* &head,int data){
    if(head==NULL){
        node* temp=new node(data);
        head=temp;
    }
    else{
    node* temp=new node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;}
}
void InsertAtPosition(node* &head,int data,int position){
    node* node_create=new node(data);
    node* temp=head;
    int count=1;
    while (count<position-1/* condition */)
    {
        temp=temp->next;/* code */
        count++;
    }
    node_create->next=temp->next;
    temp->next->prev=node_create;
    temp->next=node_create;
    node_create->prev=temp;
    
}
void print_linked( node* ptr){
    
  
    while (ptr!=NULL)
    {
       cout<<ptr->data<<" ";
      ptr=(ptr->next); /* code */
    }
    

}
int main()
{
    node *head = new node(3);
   // print_linked(head);
    InsertAtHead(head,5);
    InsertAtHead(head,9);
    InsertAtHead(head,12);
    InsertAtHead(head,16);
    InsertAtHead(head,35);

    print_linked(head);
    cout<<endl;
    InsertAtPosition(head,54,6);

  print_linked(head);

    return 0;
}
