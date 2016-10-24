#include<iostream.h>
int main()
{
    int *p;
    int *q;
    int z;
    p=&z;
    *p = 24;
    
    cout<<"the value of z is "<<z<<endl;
    cout<<"the value of *p is"<<*p<<endl;
    
    q=p;
    
      cout<<"the value of *q is"<<*q<<endl;

    system ("pause");
    return 0 ;
}
