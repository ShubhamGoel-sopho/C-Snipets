//////////////////////////count the no of the occurances int the array/////////////////
#include<iostream>
#include<stdio.h>
using namespace std;
template  <class T>
void countoccurance( T* a, int n)
{
    bool fok=1;
    T v;
    int count=0 ;
    v=a[0];
    count = 1;
    for(int j=0;j<n;j++)
{

 for(int i=j+1;i<n;i++)
    {
        if(a[i]==0)
        {
            continue;
        }
        else if(a[i]==v)
       {
           ++count;
           a[i]=0;
          }
    }
    cout<<"the no. of the occurances of "<<a[j]<<" -is-"<<count<<endl;
while(fok)
  {

  if(a[j+1 ]!=0)
   {
     fok=0;
   v=a[j+1];
    count=1;
   }
   else
   j++;
  }}
}

int main()
{
    int  a[10];
    cout<<"enter the elements in the array"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
        cout<<endl;

    }
countoccurance(a,10);



   return 0;
}
