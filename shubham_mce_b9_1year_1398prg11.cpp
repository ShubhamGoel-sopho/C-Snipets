#include<iostream.h>
using namespace std;
int main()
{
//prime no
int n;
int i = 2;
cout<<"enter the no. for check whether no. is prime or not"<<endl;
cin>>n;
if(n==1||n==2)
{
              cout<<"the no. is prime"<<endl;
              }
              while(i<n)
              {
                      if(n%i==0)
                      {
                                cout<<"the no. is not prime"<<endl;
                                break;
                                }         
                                else {
                                cout<<"the no. is prime"<<endl;
                                break;}
                                i++;
                                }           
                                
                      
       system ("pause") ;
       return 0 ;
       }
    
    
    
    
    
