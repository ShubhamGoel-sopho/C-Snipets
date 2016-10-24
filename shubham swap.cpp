/////////////////////////swapping using the pointers/////////////////

#include<iostream.h>
using namespace std;
void swap(int *f,int *g);
int main()
{
    int a,b;
    
    cout<<"enter a";
    cin>>a;
    cout<<"enter b";
    cin>>b;
    
    
    cout<<endl;
    cout<<"before swapping the values of a and b are"<<a<<","<<b<<endl;
    swap(&a,&b);
    cout<<"after swapping the values of a and b are"<<a<<","<<b<<endl;
    
    
    
    
    system ("pause");
    return 0;
}
void swap(int *f,int *g)
{
     int temp;
     temp = *f;
     *f=*g;
     *g=temp;
     }


    
    
    
    
    
    

