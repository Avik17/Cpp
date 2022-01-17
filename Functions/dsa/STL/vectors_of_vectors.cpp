#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printvec(vector<vector<int>> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << "Size " << v[i].size() << endl;

        for (int j = 0; j < v[i].size(); j++)
        {

            cout << v[i][j] << " " << endl;
        }
    }
}
int main()
{
    int N;
    cin >> N;

    vector<vector<int>> v;
    for (int i = 0; i < N; i++)
    {
        int n; // no. of elements in each vectors
        cin >> n;
        vector<int> temp;

        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x); // value in vectors input
        }

        v.push_back(temp);
    }

    printvec(v);

    return 0;
}
