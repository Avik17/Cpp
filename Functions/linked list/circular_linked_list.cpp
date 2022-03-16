#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};
 void print_list(node* head){
      node* list=head;
       
       do{
          std::cout<<list->data<<"\n";
           list=list->next;/* code */
       }while (list!=head);
       }
       
int main()
{
    node *head;
    head = new node();
    node *second;
    second = new node();
    node *third;
    third = new node();
    node *fourth;
    fourth = new node();
    head->data = 7;
    head->next = second;
    second->data = 10;

    second->next = third;
    third->data = 46;
    
    third->next = fourth;
    fourth->data = 84;

    fourth->next = head;
    print_list(head);
return 0;
}