#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < n+i-1; j++)
        {
            if (j>=i-1)
            {
                cout<<"* ";/* code */
            }
          else cout<<" "; /* code */
        }
        cout<<"\n";
    }
    
    return 0;
}