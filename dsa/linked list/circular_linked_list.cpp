#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int data){
        this->data=data;
        this->next==NULL;
    }
};

void InsertNode(node* &tail,int data,int element){
    if(tail==NULL){
        node* node1=new node(data);
        node1->next=node1;
        tail=node1;
    }
    else{
        node* temp=tail;
        while (temp->data!=element)
        {
         temp=temp->next;   /* code */
        }
        

        node* node_create=new node(data);
        node_create->next=temp->next;
        temp->next=node_create;
        
        
    }
}
 void print_list(node* tail){
      node* list=tail;
       
       do{
          std::cout<<list->data<<" ";
           list=list->next;/* code */
       }while (list!=tail);
       }
       
int main()
{
    node *tail=NULL;
    InsertNode(tail,5,0);
    InsertNode(tail,7,5);
    InsertNode(tail,9,7);
    InsertNode(tail,6,9);
    InsertNode(tail,2,6);
   InsertNode(tail,22,7);
    print_list(tail);
return 0;
}