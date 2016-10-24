#include<iostream.h>
using namespace std;
int main()
{
    //selction sorting 
    int a[20];
    int small;
    int h,j,sw,n;
    int i;
    cout<<"enter how many elements are in the array"<<endl;
    cin>>n;
    cout<<"enter the elements in the array to be sort"<<endl;

for( i=0;i<n;i++)
{
        cin>>a[i];
        }
        
        
        for(int k = 0;k<n-1;k++)
        {
                small = a[k];
                h=k;
                for(j=i+1;j<n;j++)
                {
                                  if(small>a[j])
                                  {
                                  small=a[j];
                                  h=j;
                                  }}
                                  
                                  
                    sw=a[h];
                    a[h]=a[k];
                    a[k]=sw;
                    
                    for( int y = 0; y < n ; y++)
					{

                    cout<<a[y]<<",";
                    						}
			cout<<endl;
			system("pause");
	 cout<<endl;          
	}
	
return 0;
}

                    
        
