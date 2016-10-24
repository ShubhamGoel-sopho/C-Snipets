#include<iostream.h>
using namespace std;
//////////programm for dynamic memeory allocation of an array/////////////////////
int main()
{
     int *createnewarray(int *p,int old,int newsize);
    int  capp,count;
    capp=5;
    count=0;
    int  *a=new int [capp];
    cout<<"enter the data elements"<<endl;
    int num;
    do
    {cin>>num;
        cout<<endl;
        if(num !=-1)
        {
               if(count==capp)
               {
                          a=createnewarray(a,capp,capp+5);
                          capp +=5;
                          }
                          a[count]=num;
                                        
                           count++  ;
                          }   
           }while(num !=-1);
           cout<<"the array is now "<<endl;
           for(int i=0;i<count-1;i++)
           {
                   cout<<a[i]<<endl;
                   
                   }
           
  system("pause");
  return 0 ;
}
        
 int *createnewarray(int *p,int old,int newsize)
           
{
           int *o=new int [newsize];
           for(int i = 0;i<old;i++)
           {
                   o[i]=p[i];
                   }
                   delete []p;
                   return o;
                   }
