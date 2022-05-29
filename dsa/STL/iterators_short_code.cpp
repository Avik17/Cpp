#include <iostream>
#include <bits/stdc++.h>
using namespace std;

    int main(){
    vector <int> v={1,4,5,8,0};
    for (int &value : v)
    {
        cout<<value<<endl;
        value++;/* code */
    }
    

   for (int value : v)
    {
        cout<<value<<endl;/* code */
    }
    
 

return 0;
}
