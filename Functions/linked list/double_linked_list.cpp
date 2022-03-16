#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;
};
void print_linked(struct node* ptr){
    
  
    while (ptr!=NULL)
    {
       cout<<ptr->data<<endl;
      ptr=(ptr->next); /* code */
    }
    

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
    head->prev = NULL;
    head->next = second;
    second->data = 10;
    second->prev = head;
    second->next = third;
    third->data = 46;
    third->prev = second;
    third->next = fourth;
    fourth->data = 84;
    fourth->prev = third;
    fourth->next = NULL;
    print_linked(head);


    return 0;
}
