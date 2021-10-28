#include <iostream>
using namespace std;
#include <math.h>
void pytrip(int a, int b, int c)
{
    int max;
    int d;
    if (a >= b)
    {
       
        if (c >= a)
        {
            max = c;
            d = pow(a, 2) + pow(b, 2);
        }
      else{   max = a;
        d = pow(b, 2) + pow(c, 2);}
    }
    else if (b >= c)
    {
        max = b;
        d = pow(a, 2) + pow(c, 2);
    }
else{  
            max = c;
            d = pow(a, 2) + pow(b, 2);
        }

if (pow(max, 2) == d)
{
    cout << a << " " << b << " " << c << " "
         << " are Pythagorus Triplet";
}
else
    cout << a << " " << b << " " << c << " "
         << " are not Pythagorus Triplet";}

int main()
{
int a,b,c;
cin>>a>>b>>c;
pytrip(a,b,c);
    return 0;
}
