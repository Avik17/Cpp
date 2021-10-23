#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    scanf("%d",&n);
    for (int i = 0; i <n ; i++)
    { int num=1;
      for (int j = 0; j < n; j++)
      {
          if (j<n-i-1)
          {
              cout<<" ";
          }
          else {cout<<num<<" ";
          num++;}
         
      }
      cout<<"\n";
      
    }
    
    return 0;
}