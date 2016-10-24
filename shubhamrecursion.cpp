#include<iostream.h>
using namespace std;
int man(int i)
{
    if(i>=3)
    return i;   
cout<<i<<"emtergency"<<endl;
 
 man(++i);
 cout<<i<<"due to call of recursion 1 ofman("<<i<<")"<<endl;
 man(++i);
 cout<<i<<"due to the recursion 2 call of man("<<i<<")"<<endl;
 
 return 0;
}
int main()
{
    int x  = 0;
  int c=  man(x);
    
    
    system ("pause");
    
    
    return 0;
}
