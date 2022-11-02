// #include <bits/stdc++.h> 
// #include <bits/stdc++.h> 
// /****************************************************************

//     Following is the class structure of the Node class:

//        class Node 
//         { 
//         public:
//             int data;
//             Node *next;
//             Node(int data) 
//             {
//                this->data = data;
//               this->next = NULL;
//             }
//         };

// *****************************************************************/

// Node *findMiddle(Node *head) {
//     Node* temp=head;
//     int count=1;
//     while(temp!=NULL){
//         temp=temp->next;
//         count++;
//     }
//     if(count%2!=0)
//         count=(count/2)+1;
//     else count=count/2;
//     int cnt=1;
//     temp=head;
//     while(cnt!=count){
//         temp=temp->next;
//         cnt++;
//     }
//     return temp;
//     // Write your code here
// }