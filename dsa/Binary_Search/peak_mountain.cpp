#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/peak-index-in-a-mountain-array/

    int main(){
    class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start=0;
        int end=arr.size()-1;
        int mid=(start+end)/2;

    while(start<=end){
        if(arr[mid]>arr[mid-1]){
            if(arr[mid]>arr[mid+1]){
                return mid;
            }
            start=mid;
      mid = start + (end - start) / 2;
            
        }
        else {
            
           end=mid;
    mid = start + (end - start) / 2;   
        }
        
    }


        return 0;
        
        
        
    }
};

 
 

return 0;
}
