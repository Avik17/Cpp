#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
       for (int j  =n; j>=0; j--)
       { if( j<=i)
          cout<<"*";
          else cout<<" ";
       }
       cout<<"\n";
    }
    
    return 0;
}