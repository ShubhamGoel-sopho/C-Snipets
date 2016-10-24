#include<iostream>
using namespace std;
void printthethree(int  *arr,int size)
{
    int aux[2];
    aux[0]=arr[0];
    int j=1;
    int max;
    for(int i=1;i<size;i++)
    {
            if(arr[i]>aux[0])
            {aux[++j]=arr[i];
            max=arr[j];
            }
            
            }
            for(int i=0;i<2;i++)
            {
                    cout<<aux[i];
                    }
                    
                    
                    }
                    int main()
{
    int arr[] = {12, 11, 10, 5, 6, 2, 30};
    int n = sizeof(arr)/sizeof(arr[0]);
    printthethree(arr, n);
    system ("pause");
    return 0;
}
