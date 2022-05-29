#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int binary_search(int arr[], int size, int element)
{
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
    int mid = (high + low) / 2;

        if (arr[mid] == element)
           { return mid;}
        else if (element < arr[mid])
          {  high = mid - 1;}
        else if (element > arr[mid])
            {low = mid + 1;} /* code */
    }
    return -1;
}
int main()
{

    int arr[] = {1, 5, 16, 29, 75, 79, 86, 93, 99, 112, 123, 139, 149, 155, 222, 478, 1111};
    int size = sizeof(arr) / sizeof(int);
    
    int element;
    cin >> element;
    int search = binary_search(arr, size, element);
    if (search == -1)
        cout << "Element is not found";
    else
        cout << "The " << element << " is at index " << search;

    return 0;
}
