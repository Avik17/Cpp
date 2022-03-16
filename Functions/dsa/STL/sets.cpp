#include <bits/stdc++.h>
using namespace std;

    int main(){
    

        set<string> s;
        s.insert("abcd");
        s.insert("gjg");
        s.insert("yhf");
        s.insert("jkgd");
        s.insert("ghcd");
        for (string value :s)
        {
            cout<<value<<"\n";;
            /* code */
        }
        cout<<"\n\n";
        auto it=s.find("abcd");
        if (it!=s.end())
        {
            s.erase(it);
            /* code */
        }
        s.erase("yhf"); // erase fn can be used with both iterator and its value
         for (string value :s)
        {
            cout<<value<<"\n";;
            /* code */
        }
        

 

return 0;
}
