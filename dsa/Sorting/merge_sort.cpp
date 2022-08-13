#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void merge(int *arr, int s, int mid, int e)
{
    int *arr1 = new int[mid - s + 1];
    int *arr2 = new int[e - mid];
    int index = s;
    for (int i = 0; i < mid - s + 1; i++)
    {
        arr1[i] = arr[index++];
    }
    for (int j = 0; j < e - mid; j++)
    {
        arr2[j] = arr[index++];
    }
    int i = 0;
    int j = 0;
    index = s;
    // int k = 0;
    while (i < mid - s + 1 && j < e - mid)
    {
        if (arr1[i] > arr2[j])
            arr[index++] = arr2[j++];
        else
            arr[index++] = arr1[i++];
    }
    while (i < mid - s + 1)

    {
        arr[index++] = arr1[i++];
    }
    while (j < e - mid)
    {
        arr[index++] = arr2[j++];
    }
    delete[] arr1;
    delete[] arr2;
}
void mergeSort(int *arr, int s, int e)
{

    if (s < e)
    {

        int mid = s + (e - s) / 2;
        mergeSort(arr, s, mid); // left
        mergeSort(arr, mid + 1, e);
        merge(arr, s, mid, e);
    }
    // Write your code here.
}
int main()
{

    int arr[8] = {40, 34, 15, 45, 7, 2, 55, 5};
    mergeSort(arr, 0, 7);

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
