#include<iostream>

using namespace std;
void swap(char *a,char *b)
{char temp;
temp=*a;
*a=*b;*b=temp;}
     

void permutation(char a[],int start,int end)
{int j;

     

              if(start==end)
              {
               cout<<a<<endl;
              
               }
               else
               {
               for(j=start;j<end;j++)
               {
                   swap(a[start],a[j]);
                  permutation(a,start+1,end);
                  swap(a[start],a[j]);
                  
                  }
                  
                  
                  }}
                  
                  
 int main()
                  {
                      char a[]="SHUBHAM";
                      permutation(a,0,7);
                      
                      
                      
                      system ("pause");
                      return 0 ;
                      
                      
               }
                   
               
               
