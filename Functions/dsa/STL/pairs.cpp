#include <iostream>
using namespace std;

    int main(){
    pair<int,string> p;
    p={1,"abcd"};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,string> &p1=p;

    cin>>p1.first>>p1.second;
    
    cout<<p.first<<" "<<p.second;

 
 

return 0;
}
