#include<iostream.h>
using namespace std;

bool isnoeven(int n)
{
     if(n%2==0)
     return true;
     else 
     return false;
     }
     
     
     int main()
     {
         int v;
         cout<<"enter any no ..."<<endl;
         cin>>v;
         bool he;
         he = isnoeven(v);
         
         
         if (he)
         {
                         cout<<"the no is even "<<endl;
                         }else
                         cout<<"go the hell"<<endl;
         int age ;
         cout<<"enter your age "<<endl;
         cin>>age;
         bool getdiscount;
       getdiscount= ( age>=12)&&(age<=65);
       cout<<getdiscount;
       if(getdiscount)
       {
                      cout<<"you get dicount"<<endl;
                      }
                      else
                      cout<<"go to the hell"<<endl;
         
                             
         
                         
                         
                         
                         
                         system ("pause");
                         return 0 ;
                         }
