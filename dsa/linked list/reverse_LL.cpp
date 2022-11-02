#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

// LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
    
// { 
   
//     if(head==NULL || head->next==NULL)
//       return head; 
 
//     LinkedListNode<int>* prev=head;
//     LinkedListNode<int>* curr=head->next;
//       LinkedListNode<int>* temp=curr->next;
//     while(temp!=NULL)
//     {
//         curr->next=prev;
//         prev=curr;
//         curr=temp;
//         temp=temp->next;
        
//     }
//     curr->next=prev;
//     head->next=NULL;
//     head=curr;
//  return head;
//    // Write your code here
// }