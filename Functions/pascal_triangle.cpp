#include <iostream>
using namespace std;
 int fact(int n){ if(n==1 || n==0){
     return 1;
 }
         return   n*fact(n-1);
 }
    int main(){
    int n,r;
    cin>>n;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j<= i; j++)
    {
        cout<<fact(i)/(fact(i-j)*fact(j))<<" ";
    }
  cout<<"\n";
}


 
 

return 0;
}
