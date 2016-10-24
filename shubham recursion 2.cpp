#include<iostream.h>
using namespace std;
int spiral(int i)
{
    if (i>=4)
    return 2*i;
    cout<<"emergency "<<2*i<<endl;
    spiral(++i);
    cout<<"the call of functon 1 "<<i<<endl;
    spiral(++i);
    cout<<"the call of function 2"<<i<<endl;
    return 2*i;
}

int main()
{
    int c =spiral(0);
    
    
    cout<<endl;
    cout<<"the value of c is "<<c<<endl;
    
    system("pause");
    return 0 ;
}
    
