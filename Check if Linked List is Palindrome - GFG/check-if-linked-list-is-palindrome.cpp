//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
Node* reverse(Node *head) 
    
{ 
   
    if(head==NULL || head->next==NULL)
      return head; 
 
    Node* prev=head;
    Node* curr=head->next;
      Node* temp=curr->next;
    while(temp!=NULL)
    {
        curr->next=prev;
        prev=curr;
        curr=temp;
        temp=temp->next;
        
    }
    curr->next=prev;
    head->next=NULL;
    head=curr;
 return head;
   // Write your code here
}

class Solution{
  public:
  
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {   if( head->next==NULL){
        return true;
    }
        Node* fast=head->next;
      Node* slow=head;
      
       while(fast!=NULL && fast->next!=NULL){
           slow=slow->next;
           fast=fast->next->next;
         
           
       }
       Node* next_node=slow->next;
       slow->next=NULL;
        
        Node *curr=reverse(next_node);
        
        
     Node* temp=head;
      while(curr!=NULL  ){
            if(curr->data!=temp->data)
          return false;
          
          curr=curr->next;
          temp=temp->next;
        
      }
        //Your code here
        return true;
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends