#include<iostream.h>
#include<iomanip.h>
using namespace std;
int main()
{
       int arr[100];
    int n , search , i;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    cout<<"Enter the elements of the array :\n";
    for(i=0 ;i<n; i++)
    cin>>arr[i];
    cout<<"Enter the element to search :";
    cin>>search;
    int count=0;
    for(i=0 ;i<n ;i++)
    {
    if(search==arr[i])
    {
                    cout<<search<<"is found at location  "<<i+1<<endl;
                    count++;
    }
    }
    if(count==0)
    cout<<search<<"is not found in the given list\n";


                                   
       system ("pause") ;
       return 0 ;
       }
    
    
    
    
    
