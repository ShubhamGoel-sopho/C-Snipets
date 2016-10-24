#include<iostream.h>
#include<string.h>
using namespace std;
int main()
{
    char a[100];
    int i , j ;
    i=0;
    int last;
    int k;
    int p=0
    cout<<"enter the sentence for reversal"<<endl;
    gets(a);
    int len = strlen(a);
    for(i;i<len;i=i+p)
    {
                
                   j=i;
                   while(a[j]!=' ')
                  j++;
                   last = j;
                  
                 char ch;
                 for(k=i;k<=(last/2);++k,--last)
                 {
                                                     ch = a[k];
                                                     a[k]=a[last];
                                                     a[last]=ch;
                                                     }
                                                     i=j+1;
                                                     p =i;
                                                     }
                                                     cout<<a<<endl;
                                                     system ("pause");
                                                     return 0 ;
                                                     }
                               
                                                       
                   
    
