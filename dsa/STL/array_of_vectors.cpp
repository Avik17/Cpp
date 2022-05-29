#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printvec(vector<int> v)
{
    cout << "Size " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout <<v[i]<<" "<< endl; 

        /* code */
    }
}
    int main(){
        int N; //no. of arrays input
        cin>>N;
    vector<int> v[N];
    for (int i = 0; i < N; i++)
    {       int n; //no. of elements in each vectors
           cin>>n;
           for (int j = 0; j < n; j++)
           {    int x;
               cin>>x; //value in vectors input
               v[i].push_back(x);
              
           }
           

    }
for (int i = 0; i < N; i++)
{
    
           {    printvec(v[i]);
           }
    
}
    
 
 

return 0;
}
