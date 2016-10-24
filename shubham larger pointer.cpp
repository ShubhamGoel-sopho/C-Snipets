#include<iostream.h>
int *big(int *x,int *y);
using namespace std;
 int main()
 {
     int a,b;
     cout<<"enter the values of a and b"<<endl;
     cin>>a>>b;
     int *c;
   c=  big(&a,&b);
     cout<<"the larger of the two value is  :  "<<*c<<endl;
     
     
     
     system ("pause");
     return 0;
     }
     int *big(int *x,int *y)
     {
         if (*x>*y)
         return x;
         else
         return y;
         }
