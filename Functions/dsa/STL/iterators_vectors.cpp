#include <iostream>
#include <bits/stdc++.h>
using namespace std;

    int main(){
    vector <int> v={1,7,8,4,3};
    vector <int> ::iterator it;
    for (it  = v.begin(); it !=v.end(); it++)
    {
        cout<<(*it)<<endl;
        /* code */
    }
      vector <pair<int,int>> v_p={{1,7},{8,4},{3,9}};
    vector <pair<int,int>> ::iterator itr;

   for (itr  = v_p.begin(); itr !=v_p.end(); itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
        /* code */
    }
 

return 0;
}
