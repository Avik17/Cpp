#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void insert(int *arr, int x, int index, int size)
{
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
        /* code */
    }
    arr[index] = x;
}

int main()
{

    int arr[100] = {1, 7, 8, 12, 13, 45, 89};
    int num;
    int index;
    cout << "enter the new number" << endl;
    cin >> num;

    cout << "enter index" << endl;
    cin >> index;
    insert(arr, num, index, 7);

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
        /* code */
    }

    return 0;
}
