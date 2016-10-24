#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;


int main()

{int findsubstring(char a[],char b[]);
     char a[20];
    cout<<"enter the string upon which the search to be done"<<endl;
    gets(a);
     char b[20];
    cout<<"enter the another string for which has to be findid out from the main string"<<endl;
    gets(b);
    int ans;
    ans=findsubstring(a,b);
    if(ans==-1)
    {
               cout<<"the given string do not exists in the array"<<endl;
    
               }
               else
                cout<<"the given string do  exists in the array"<<endl;
                
                
                system ("pause");
                return 0;
                }
                
                
int findsubstring(char a[],char b[])
{
    int x,y;
    x=strlen(a);
    y=strlen(b);
    for(int i =0;i<=x-y;i++)
    {
            char n[y];
            for(int j=i;j<y+i;j++)
            {
                 for(int k=0;k<y;k++)
                 {
                        n[k]=a[j++];
                        }  
                        }
                        if(strcmp(n,b)==0)
                        {
                                              return 1;
                                              break;
                                              }
                                              }
                                              return -1;
                                              }
    
    
