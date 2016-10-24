#include<iostream.h>
using namespace std;
int main()
{
               int n;
               cout<<"enter how many terms you want in a fibbonaci series"<<endl;
               cin>>n;
               int f_1,f_2,f_3;
               f_1=0;
               f_2=1;
               cout<<f_1<<endl;
               cout<<f_2<<endl;
               for(int i=0;i<n;i++)
               {
                       f_3=f_1+f_2;\
                       
                       cout<<f_3<<endl;
                       f_1=f_2;
                       f_2=f_3;
                       }
                       
               
                                                
                      
       system ("pause") ;
       return 0 ;
       }
    
    
    
    
    
