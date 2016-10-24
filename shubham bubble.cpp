#include<iostream.h>
using namespace std;
void swap(int i,int j)
{
  int temp;
  temp =i;
  i=j;
  j=temp;
}   
int main()
{
    int a[10];
    int n; 
    cout<<"enter how many elements are there in the array"<<endl;
    cin>>n;
    cout<<"enter the elements of the array"<<endl;
for(int i = 0;i<n;i++)
{
        cin>>a[i];
        cout<<endl;
        }
        for(int k =0;k<n;k++)
        {int count = 0;
                for(int j = 0;j<n-1-k;j++)
                {
                        if (a[j]>a[j+1])
                        {
                            swap(a[j],a[j+1]);
                            count++;
                            }
                            else
                            cout<<"after "<<j+1<<"iteration the elements which are not swapped are"<<a[j]<<","<<a[j+1]<<endl;
                            
                            }
                            cout<<"the no of ties happened"<<count<<endl;
                            
                            }
                            cout<<"rhe sorted array is"<<endl;
                            for(int h = 0;h<n;h++)
                            {
                                    cout<<a[h]<<endl;
                                    }
                            
                            system ("pause");
                            return 0 ;
                            }
                                              
