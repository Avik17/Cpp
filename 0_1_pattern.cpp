#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n; 
/*  1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1     */
    int arr[] = {1, 0};
    int *ptr = arr;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if ((i % 2 != 0 && j == 0) || (i % 2 != 0 && j % 2 == 0) || (i % 2 == 0 && j % 2 != 0))
            {
                cout << arr[1] << " ";
            }
            else
            {
                cout << arr[0] << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}