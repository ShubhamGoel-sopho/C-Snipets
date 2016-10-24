#include<iostream>
#include<climits>///////////////////////////////brute force algorithm///////////////////////
using namespace std;
 void maxsubarray(int a[],int n);
int main()
{ void maxsubarray(int a[],int n);
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int a[20];
    cout<<"enter the array elements"<<endl;
    for(int i=0;i<n;i++)
    {
            cin>>a[i];
            cout<<endl;
            }
            maxsubarray(a,n);
            
         /*   cout<<"the highest results of the max subarray is"<<result<<endl;*/
            
            system ("pause");
            return 0;
            }
            
            
           void maxsubarray(int a[],int n)
          {
                int ans= INT_MIN;
                int count = 1;
                int sum =0;
                for(int i=0;i<n;i++)
                {
                        for(int j=0;j<n-i;j++)
                        {
                                for(int k=j;k<count+i;k++)
                                {
                                                      sum +=a[k];
                                                      }count++;
                                                      if(sum>ans)
                                                      {
                                                                 ans=sum;
                                                                 }
                                                                 sum=0;
                                                                 }
                                                                 count = 1;
                                                                 cout<<"for  "<<i+1<<" iteration the max is"<<ans<<endl;
                                                                 ans=INT_MIN;
                                                                 }
                                                      
                                                                 }  
