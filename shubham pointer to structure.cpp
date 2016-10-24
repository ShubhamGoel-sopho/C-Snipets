#include<iostream.h>
#include<string.h>
#include<stdio.h>
using namespace std;
struct employee
{
       int empno;
       char name[50];
       int basic;
       int exp;
      }ob[25],*fir[25];
       void display(employee *emp)
       {int len =strlen(emp->name);
       
            cout<<"employee no.---------> "<<emp->empno<<endl;
            cout<<"name-----------------> "<<endl;cout.write(emp->name,len);
            cout<<"basic entered by you-->"<<emp->basic<<endl;
            cout<<"your experience------->"<<emp->exp<<endl;
            }
            
            
            void increasebasic(employee *emp)
            {
                 if (emp->exp>=10)
                 emp->basic += 5000;
                 }
            
            
            
            
            
            
           
       int main()
       {
           int n;
           cout<<"how many records???"<<endl;
           cin>>n;
      
      
       for(int i =0;i<n;i++)
       {
       cout<<"enter the employee no."<<endl;
       cin>>ob[i].empno;
       fflush(stdin);
       cout<<"enter the employee name"<<endl;
       gets(ob[i].name);
       fflush(stdin);
       cout<<"enter the basic"<<endl;
       cin>>ob[i].basic;
       cout<<"entert the experience"<<endl;
       cin>>ob[i].exp;
       }
       for(int i = 0;i<n;i++)
       {
       fir[i]  = &ob[i];
       }
       
       
       
       cout<<"the entered information by you is"<<endl;
       for(int i =0 ;i<n;i++)
     {  display(fir[i]);
              
       increasebasic(fir[i]);
       cout<<"after invoking the basic"<<endl;
      display(fir[i]);
       }
       
       
       
       
       
       
       
       
      system ("pause");
      return 0 ;
      } 
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
