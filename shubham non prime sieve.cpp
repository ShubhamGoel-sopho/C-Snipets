#include<iostream.h>
#include<math.h>
#include<string.h>
using namespace std;
 int maxcalculate(int l[],int size)
 {
     int larg;
 larg=l[0];
 for(int g = 1;g<size;++g)
 {
         if (larg<l[g])
         larg=l[g];
         }
         return larg;}
         
         
         
 
int main()
{
    ////////////////sieve of erasthones////////////////////
    ////////////////////to find the prime no. from 1 to thousand//////////////
    int maxcalculate(int k[],int size);
    int m[1000]={0};
    cout<<"how much range did you want prime no till (1000)"<<endl;
    int x ;
    cin>>x;
    

    for(int i = 2;i<sqrt(x);i++)
    {
            for(int j = i*i;j<x;j+=i)
{
            m[j] = 1;            
            
}}

int count  = 0;

for(int i = 2;i<x;i++)
{
        if(m[i]==0){
        
        count++;}
        }
        /////////////////////////to find the longest integer non prime no gap////////////////
        
int a[count]; 
int k[count-1];       
for(int i = 2;i<x;i++)
{
        if(m[i]==0){
        a[i-2]=i;
        }
        }
        for (int j=0;j<count;j++)
        {
           k[j]= a[j+1]-a[j];
            
            }
            
         int o;
         o=maxcalculate(k,count-1);
   
                  
         cout<<"the maximun non prime is"<<o<<endl;
           
                   
           
                   
                  
                  
                                                     
                                             
                                             
                                             
                                             
                                             
                                             
                                             
                                             
                                             
                                             
                                             system ("pause");
                                             return 0;
                                             }
