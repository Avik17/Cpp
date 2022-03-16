#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
{
   int data;
   struct node * next; /* data */
};

void print_linked(struct node* ptr){
    
  
    while (ptr!=NULL)
    {
       cout<<ptr->data<<endl;
      ptr=(ptr->next); /* code */
    }
    

}

    int main(){
    
    struct node * head;
     struct node * second;
      struct node * third;
      struct node * fourth;

      head = new struct node[1];
      second = new struct node[1];
      third= new struct node[1];
      fourth= new struct node[1];

head->data=81;
head->next=second;
second->data=125;
second->next=third;
third->data=196;
third->next=fourth;
fourth->data=276;
fourth->next=NULL;
print_linked(head);




    
 
 

return 0;
}
