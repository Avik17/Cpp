#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int binary_search(int arr[], int target, int size)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    bool isAsc = arr[start] < arr[end];
    if (isAsc)
    {
        while (start <= end)
        {
            if (target > arr[mid])
            { /*
                if (target < arr[mid+1]){  // added a code in here
                    return mid;
                }*/
                start = mid + 1;
                mid = start + (end - start) / 2;
               
            }
            else if (target < arr[mid])
            { 
                end = mid - 1;
                mid = start + (end - start) / 2;
            }
            else
                return mid;
            /* code */
        }
    }
    else
    {
        while (start <= end)
        {
            if (target < arr[mid])
            { 
                start = mid + 1;
                mid = start + (end - start) / 2;
            }
            else if (target > arr[mid])
            {
               /* if (target < arr[mid-1]){  // added a code in here
                    return mid;
                }*/
                end = mid - 1;
                mid = start + (end - start) / 2;
            }
            else
                return mid;
            /* code */
        }
    }
    
    return start;
}
    int main(){
    int arr[] = {3, 4, 9, 12, 15, 19, 20, 23, 26, 28, 31, 35, 41, 65, 77, 81, 89};
    int arr2[]={112,106,91,88,79,65,54,53,49,32,31,27,11,7,6,2};
    int size = sizeof(arr2) / sizeof(arr2[0]) - 1;
    int target = 29;
   
    
    int index = binary_search(arr, target, size);
    int ans=arr[index];
    cout<<ans<<endl;
    
   
  

 
 

return 0;
}
