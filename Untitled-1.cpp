#include <iostream>

using namespace std;

int main(){
   /*int a,b;
    cin>>a;
    cin>>b;
    int x;
    for(int i=a+1;i<b;i++){
     for( x=2;x<i;x++){
    if (i%x==0)
    {break;}}
    if (x==i)
    {
        cout<<i<<endl;
    }
    
    }*/
    int n;
    cin>>n;

    if (n%2==0 && n%3==0)
    {
       cout<<"divisible by both";
    }
    else if (n%2==0 || n%3==0)
    {
       cout<<"divisible by only one of them";
                

    }

    
    
    return 0;
}