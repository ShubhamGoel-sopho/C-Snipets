#include<iostream.h>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
    ////////////////sieve of erasthones////////////////////
    ////////////////////to find the prime no. from 1 to thousand//////////////
    
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
cout<<"the no which are prime are"<<endl;
for(int i = 2;i<x;i++)
{
        if(m[i]==0){
        cout<<i<<"---";
        count++;}
        }
            
            
 cout<<"the no of prime no btw 1 to 100 are"<<count<<endl;           
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            system ("pause");
            return 0;
            
            }
