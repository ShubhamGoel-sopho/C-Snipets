#include<iostream.h>
int main()
{
    int *iptr[5];
    int p,q,r,s,t;
    p=5;
    q=6;
    r=7;
    s=8;
    t=9;
    iptr[0]  = &p;
    iptr[1]  = &q;
     iptr[2]  = &r;
      iptr[3]  = &s;
       iptr[4]  = &t;
       
       
       
       for(int i = 0 ;i<5;i++)
       {
               cout<<"the adress at array of iptr["<<i<<"]"<<*(iptr+i)<<endl;
               }
               cout<<"the base adress of the iptr is"<<iptr<<endl;
               
               for(int j = 0 ;j<5;j++)
               {
                       cout<<"the values the poiners are holding are"<<**(iptr+j)<<endl;
                       }
                       
                       
                       system ("pause");
                       return 0;
                       }
       
