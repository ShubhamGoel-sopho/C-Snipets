#include<iostream.h>
using namespace std;
int main()
{
    //prgramme to find the factorial
    int x;
    int fact = 1;
    cout<<"enter the no of find the factorial"<<endl;
    cin>>x;
    
    while(x>1)
    {
           fact = fact*x;
           x--;
           }
           cout<<"the factorial of the no is="<<fact<<endl;
           
           
           
           system ("pause");
           return 0 ;
           }
           
           
    
