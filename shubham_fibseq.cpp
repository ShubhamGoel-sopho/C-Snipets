#include<iostream>  ////////////////////fibonacci sequence with memoiazation//////////////////
using namespace std;
int a[51];
long fibonacci(int n)
{
     if (n<=1)
    { 
     return n;}  
     if(a[n] != -1)
     {
             return a[n];
             }
     
     
     
     
     a[n]= fibonacci(n-1)+fibonacci(n-2);
     return a[n];
     }
     int main()
     {
         
         for(int i=0;i<51;i++)
         {a[i]=-1;}
         int n;
         cout<<"enter the vlaue of the term to which the series to founded"<<endl;
         cin>>n;
         
         long result=fibonacci(n);
         
         cout<<"the result of the first n term of the fibonacci sequence = "<<result<<endl;
         
         
         system ("pause");
         return 0;
         }
