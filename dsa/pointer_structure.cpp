#include <iostream>
using namespace std;
struct rectangle
{ int l;
int b;

    /* data */
};

    int main(){
struct rectangle r;
struct rectangle *p ;
p=new struct rectangle [1];
p->b=15;                        //(*p).b
p->l=10;
cout<<p->l;

 
 

return 0;
}
