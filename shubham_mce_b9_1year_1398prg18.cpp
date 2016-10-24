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
int i, j, k, h;
 cout<<"Now enter the elements : \n";
for( i = 0; i < n ; i++)
cin>>arr[i];
for( i =0 ; i <n; i++)
  {
		int smallest = arr[i];
		    h = i;
		  for ( j = i; j <n ; j++)
				 {
				  if (smallest >  arr[j])
					{
					smallest = arr[j];
					h = j;
					}
					}
		swap(arr[i], arr[h]);
		  cout<<endl;
			for( k = 0; k < n ; k++)
					{
						cout<<arr[k]<<" , ";
						}
			cout<<endl;
			system("pause");
	 cout<<endl;          
	}
return 0;
}
