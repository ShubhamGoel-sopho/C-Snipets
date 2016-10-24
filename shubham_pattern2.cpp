#include<iostream.h>
#include<string.h>
using namespace std;
void printspace(int l)
{
     char t[l];
     strcpy(t," ");
     for(int i = 0;i<l;i++)
     {
             cout<<t[i];}
  
          }   
int main()
{
    char ch = 'A';
    int i ,j,s;
    for(i=0;i<5;i++)
    {
                    ch = 'A';
                    for(j=0;j<(5-i);j++)
                    {
                    cout<<ch;
                    ch++;
                    }
                    
            printspace(2*i-1);
           
             if(i==0)
             {
                     ch--;
              for(s=0;s<4;s++)
             {
                                 ch--;
                                cout<< ch;
                                }}
                                else
                                {
             for(s=0;s<(5-i);s++)
             {
                                 ch--;
                                cout<< ch;
                                }}
                                cout<<endl;
                                }
                                
                                system ("pause");
                                return 0;
                                }                   
