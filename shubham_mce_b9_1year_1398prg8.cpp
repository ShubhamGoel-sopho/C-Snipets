#include<iostream.h>
using namespace std;
int main()
{
   int a[100] ,i,n;
   cout<<"enter the no of elements in the array "<<endl;
   cin>>n;
   cout<<"enter the elements in the array"<<endl;
   for(i=0;i<n;i++)
   {
                   cin>>a[i];
                   
                   }
                   int search ;
                   cout<<"enter the element to be search for"<<endl;\
                   cin>>search;
                   for(i=0;i<n;i++)
                   
                                   if(a[i]==search)
                                   {
                                                   cout<<"given element is found at location at"<<i+1<<endl;
                                                   break;}
                                                   if(i==n)
           cout<<search<<"is not found in the given list\n";

                             
                                      
                                        
                                   
   
       system ("pause") ;
       return 0 ;
       }
    
    
    
    
    
