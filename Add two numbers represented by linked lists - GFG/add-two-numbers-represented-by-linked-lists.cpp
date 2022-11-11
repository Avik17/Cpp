//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
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
Node *Insertnode(Node* &head,Node*&prev,int data){
     Node* temp=new Node(data);
     if(head==NULL)
     head=temp;
     
     else{
    prev->next=temp;
    
     }
     return temp;
 }
class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {   
        Node *head1=reverse(first);
       Node* head2=reverse(second);
        int carry=0;
        Node* temp1=head1;
        Node *temp2=head2;
        Node* prev=NULL;
         Node* head3=NULL;
         int cnt=0;
        while(temp1 !=NULL && temp2!=NULL)
        {
              
            int sum=0;
           sum=temp1->data + temp2->data + carry;
           //  Node* add= new Node(sum%10);
              carry=sum/10;
            prev= Insertnode(head3,prev,sum%10);
             temp1=temp1->next;
             temp2=temp2->next;
             
            
            
        }
        if(temp1==NULL){
            while(temp2!=NULL){
            int sum=0;
            sum=temp2->data+carry;
           // Node* add= new Node(sum%10);
              carry=sum/10;
                       prev= Insertnode(head3,prev,sum%10);
            temp2=temp2->next;
            }
        }
            if(temp2==NULL){
                
                while(temp1!=NULL){
                    int sum=0;
            sum=temp1->data+carry;
             //  Node* add= new Node(sum%10);
              carry=sum/10;
                      prev= Insertnode(head3,prev,sum%10);
              temp1=temp1->next;      
                }
                
            }
            while(carry !=0){
                // int sum=carry;
                // int digit=sum%10;
                 prev= Insertnode(head3,prev,carry%10);
                 carry=carry/10;
            }
        Node*result=reverse(head3);
        return result;
        // code here
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends