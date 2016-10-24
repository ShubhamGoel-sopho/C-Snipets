#include<iostream>
using namespace std;
int square(int num)
{
    return num*num;
}

int main()
{
 int  (*ptr)(int);
 ptr=square;
 int c=ptr(5);cout<<endl;
 cout<<c<<endl;
 
 c=ptr(8);cout<<endl;
 cout<<c<<endl;
 
 system ("pause");
 return 0;
}   
