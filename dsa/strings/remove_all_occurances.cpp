//https://leetcode.com/problems/remove-all-occurrences-of-a-substring/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

    int main(){
    

 class Solution {
public:
    string removeOccurrences(string s, string part) {
      
        size_t found=s.find(part);
     while(found!=string::npos){
        s.erase(found,part.length());
       found=s.find(part);
         
     }
        
        return s;
    }
};
 

return 0;
}
