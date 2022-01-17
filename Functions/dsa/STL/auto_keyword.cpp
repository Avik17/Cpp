#include <iostream>
#include <bits/stdc++.h>
using namespace std;

    int main(){
    vector <pair<int,int>> v={{1,4},{5,8},{0,7}};
 

   for (pair<int,int> value : v)
    {
        cout<<value.first<<" "<<value.second<<endl;/* code */
    }
    cout<<"In case of auto keyword"<<endl;
       for (auto value : v)    // no need to specify data types
    {
        cout<<value.first<<" "<<value.second<<endl;/* code */
    }
    for (auto it  = v.begin(); it !=v.end(); it++)
    {
        cout<<(*it).first<<" "<<it->second<<endl;
        /* code */
    }
    
 

return 0;
}
