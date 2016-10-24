#include<iostream.h>
using namespace std;
void swap( int &x, int &y)
{
     int t = x;
     x = y;
     y = t;
     }
int main()
{
int n;
cout<<"Enter the number of elements in the array : ";
cin>>n;

int arr[100];
int i, j, k;
 cout<<"Now enter the elements : \n";
for( i = 0; i < n ; i++)
cin>>arr[i];
for( i =  n-1; i>0 ; i--)
{
                    for(j=i+1;j<n;j++)
                    
                                  {    if(arr[j]>arr[j+1])
                                      {swap(arr[j],arr[j+1]);
                                      
                                      }
                                      for( k = 0; k < n ; k++)
         cout<<arr[k]<<" , ";
  cout<<endl;
  system("pause");
  cout<<endl;
        
}
           


return 0;
}

                                                             
                                      
