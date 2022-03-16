
#include <bits/stdc++.h>
using namespace std;

    int main(){
    multiset<int> candy;
    int bags;
    int time;
    cin>>bags;
    cin>>time;
    for (int i = 0; i < bags; i++)
    {   int n;
        cin>>n;
        candy.insert(n);

        /* code */
    }
    int count=0;

    for (int i = 0; i < time; i++)
    {   
        auto last_it= --candy.end();
       // cout<<(*it);
        count=count+(*last_it);
        int x=(*last_it)/2;
        candy.insert(x);
        candy.erase(*last_it);;

        /* code */
    }
    cout<<count;



    

 
 

return 0;
}
