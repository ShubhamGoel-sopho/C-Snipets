//////////////////rotation factor/////////////////////////
#include<iostream.h>

using namespace std;
int main()
{int n;
    int a[20];
    cout<<"enter the how many elements are present are in the array"<<endl;
    cin>>n;
    cout<<"enter the elements in the array"<<endl;
    for(int i=0;i<n;i++)
    {
            cin>>a[i];
            }
            int rf;
            cout<<"enter the rotation factor "<<endl;
            cin>>rf;
            int j;
            
              for(j=1;j<rf;j++)
              {
                              int x = a[(n-rf)+j];
                              for(int i=(n-rf)-j;i>=j;i--)
                             {
                                                   a[i]=a[i-1];}
                                                   a[j-1]=x;
                                                   }
                                                   
                                                   
                                                   
                                                   cout<<"now the array is"<<endl;   
                                                    for(int i=0;i<n;i++)
    {
            cout<<a[i];
            } 
            system ("pause");
            return 0 ;
            }
            
                                     
