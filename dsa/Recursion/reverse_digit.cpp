#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int reverse_digits(int n){
    if(n%10==n){
        return n ;
    }
  else  return ((n%10)*pow(10,floor(log10(n)))) + reverse_digits(n/10);
}
    int main(){
    int n;
    cin>>n;
    cout<<reverse_digits(n);

 
 

return 0;
}
