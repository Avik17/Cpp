#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printvec(vector<int> v)
{
    cout <<"Size "<< v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i]<<endl;

        /* code */
    }
}
int main()
{
    vector<int> v;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        v.push_back(x);

        /* code */
    }
    printvec(v);

    return 0;
}
