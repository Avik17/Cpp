// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

    int main(){
    class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        ans = ans + s[0];
        for (int i=1; i<s.length(); i++) {
            if (s[i]==ans.back()) {
                ans.pop_back();
            }
            else {
                ans += s[i];
            }
        }
        return ans;
        
    }
};

 
 

return 0;
}
