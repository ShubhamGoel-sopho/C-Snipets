#include<iostream.h>
using namespace std;
int main()
{   //rotating the characters.
    char a[20];

    int i,n,k;
    char cut;
    cout<<"enter how many elements are there in the array"<<endl;
    cin>>n;
    cout<<"enter the alphabets in the character array"<<endl;
    for(i=0;i<n;i++)
    {
                    cin>>a[i];
                    }
                    cout<<"enter the no of character to be rotated right"<<endl;
                    cin>>k;
                    int x=0;
                    while(x<k)
                    { 
                              cut = a[0];      
                            for(i=0;i<n;i++)
                            {
                                     a[i]=a[i+1];
                                     }
                                     a[n-1]=cut;
                                     x++;
                                     }
                                     for(i=0;i<n;i++)
                                     {
                                                     cout<<a[i];
                                                     }
                                                     
                                                     
                                                     
                                                     system ("pause");
                                                     return 0;
                                                     }
                                                     
                                                            
