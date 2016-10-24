#include<iostream>
#include<climits>
using namespace std;
int main()
{
int arr[10]={-5,6,155,-20,30,45,12,-89,45,63};

int chk=-1;
for(int i=0;i<10;i++)
{
   if(arr[i]== 1)
   chk=0;     
          }
if(chk==0)
{cout<<chk<<endl;
return ;
else

{
int diff=1,m;

for(int i=0;i<10;i++)
{
        if(arr[i]<0)
        arr[i]=INT_MAX;
        }
       int min=arr[0];
       for(int i=1;i<10;i++)
       {
            if(arr[i]<min)
            min=arr[i];   }
        do{
            if((min-diff)==1)
            {
                             
             m=min;
             arr[i]=INT_MAX;
             
                 for(int i=1;i<10;i++)
       {
            if(arr[i]<min)
            min=arr[i];   }}
        else
        {
            cout<<diff+1<<endl;
            
            }  
                 
    
    
    

    
    
    
cout<<x<<endl;





}
system ("pause");
return 0 ;
}

