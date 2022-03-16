#include <iostream>
#include <bits/stdc++.h>
using namespace std;

    int main(){
    /*

  int n;
    cin>>n;
    vector <int> v;
    for (int i=0; i<n;i++) {
    int x;
    cin>>x;
    v.push_back(x);

    }
    int a,b,c;
    cin>>a;
    v.erase(v.begin()+a-1);
    cin>>b>>c;
    
    v.erase(v.begin()+b-1,v.begin()+c-1);
    
    cout<<v.size()<<endl;
    for (auto value : v) {
   cout<<value<<" ";
    }*/
     map <string,int> m;
   int n;
   cin>>n;
    string name;
  int query_type,marks;
   for (int i=0; i<n; i++) {
  
  cin>>query_type;
 switch (query_type) {
 case 1:
 cin>>name;
 cin>>marks;
 m[name]=marks;
 break;
 case 2:
 cin>>name;
 m.erase(name);
 break;
 case 3:
 cin>>name;
 cout<<m[name]<<endl;
 break;
 default:cout<<0;
  }
   
   }
   
 

return 0;
}


