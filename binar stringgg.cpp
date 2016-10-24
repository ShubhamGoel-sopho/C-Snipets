#include<iostream>
using namespace std;
void bin(char aa[],int n)
{
          if(n<1)
          {
          cout<<aa<<endl;
                  
                  }
             
             else
             {
             aa[n-1]='0';
             bin(aa,n-1);
             aa[n-1]='1';
             bin(aa,n-1);
             }  
             
             }
                  


int main()
{
    char arr[11];
    arr[11]='\0';
    bin(arr,10);
    
    
    
    
    
    
    
    
    system ("pause");
    return 0 ;
}
