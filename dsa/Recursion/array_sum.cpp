#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int sum(int arr[],int size){
    
    if(size==1)
    return arr[0];
    else return arr[0] + sum(arr+1,size-1);
}
    int main(){
    
int arr[6]={1,3,5,7,8,4};
int ans=sum(arr,6);
 cout<<ans;
 

return 0;
}
