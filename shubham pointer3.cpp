#include<iostream.h>
#include<string.h>
using namespace std;
int main()
{
    char *iptr[]={"shubham","tarun","vicky","rohan","amit"};
    int len1=0;
    int len2=0;
    len2=strlen(iptr[3]);
    len1=strlen(iptr[1]);
    cout<<"orginally the the string  2 is ";cout.write(iptr[1],len1).put('\n');
    cout<<"orginally the  sring 4 is";      cout.write(iptr[3],len2).put('\n');
    char *t;
    t=iptr[1];
    iptr[1]=iptr[3];
    iptr[3]=t;
    len2=strlen(iptr[3]);
    len1=strlen(iptr[1]);
    
   cout<<"after exchanging the both string"<<endl;
   cout<<"exchanged string 2 is";cout.write(iptr[1],len1).put('\n');
                                  cout.write(iptr[3],len2).put('\n');
    
   cout<<"exchanged string 4 is ";
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            system ("pause");
            return 0 ;
            }
            
    
