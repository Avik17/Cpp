
  // https://leetcode.com/problems/find-smallest-letter-greater-than-target/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

    int main(){
    class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start = 0;
    int end = letters.size() - 1;
    int mid = (start + end) / 2;
        if(target>=letters[end]){
            return letters[start];
        }
        while (start <= end)
        {
            if (target >= letters[mid])
            {   if(target < letters[mid+1]){
                return letters[mid+1];
            }
                start = mid + 1;
                mid = start + (end - start) / 2;
               
            }
            else if (target < letters[mid])
            { 
                end = mid - 1;
                mid = start + (end - start) / 2;
            }
            else
                return letters[mid+1];
           
        }
         return letters[0];
    }
   
    
};

 
 

return 0;
}
