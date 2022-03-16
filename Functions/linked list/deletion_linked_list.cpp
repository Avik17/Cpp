#include <iostream>
#include <bits/stdc++.h>
class node
{
private:
    /* data */
public:
    int data;
    node *next;
};

void print_list(node *head)
{
    node *list = head;
    while (list != NULL)
    {
        std::cout << list->data << "\n";
        list = list->next; /* code */
    }
}
class node *delete_begin(node *head)
{
    node *del;
    del = head;
    head = head->next;
    delete (del);
    return head;
}
class node *delete_index(node *head, int index)
{
    node *ptr = head;
    node *del;
    int i = 0;
    while (i != index - 1)
    {
        ptr = ptr->next;
        i++; /* code */
    }
    del = ptr->next;
    ptr->next = del->next;
    delete (del);

    return head;
}
class node *delete_last(node *head)
{
    node *ptr = head;
    node *del;
    del = head->next;

    while (del->next != NULL)
    {
        del = del->next;
        ptr = ptr->next; /* code */
    }
    delete (del);
    ptr->next = NULL;

    return head;
}

using namespace std;

int main()
{
    node *first;
    first = new node();
    node *second;
    second = new node();
    node *third;
    third = new node();
    node *fourth;
    fourth = new node();
    node *fifth;
    fifth = new node();
    node *sixth;
    sixth = new node();
    node *seventh;
    seventh = new node();
    first->data = 7;
    first->next = second;
    second->data = 10;
    second->next = third;
    third->data = 46;
    third->next = fourth;
    fourth->data = 84;
    fourth->next = fifth;
    fifth->data = 24;
    fifth->next = sixth;
    sixth->data = 59;
    sixth->next = seventh;
    seventh->data = 183;
    seventh->next = NULL;

    print_list(first);
    first = delete_begin(first);
    cout << "After deletion of element at start of the linked list\n";
    print_list(first);
    first = delete_last(first);
    cout << "After deletion of element at end of the linked list\n";

    print_list(first);

    first = delete_index(first, 3);
    cout << "After deletion of element at an index of the linked list\n";

    print_list(first);

    return 0;
}
