////////////////quick sorting/////////////////////
#include<iostream.h>
using namespace std;
void swap(int a,int b)
{
     int temp;
     temp=a;
     a=b;
     b=temp;
     }
int partitionindex(int *a,int start,int end){

    
    int pindex=start;
    int pivot= a[end];
    for (int i=0;i<end;i++)
    {
        if(a[i]<=pivot)
        {
          swap(a[i],a[pindex]);
          pindex++;
          }}
          swap(pivot,a[pindex]);
         
          
          return pindex;
          }
    
void quicksort(int *a,int start,int end){

     
     int index;
     if(start<end)
     {
         index=partitionindex(a,start,end);
         
         quicksort(a,start,index-1);
          quicksort(a,index+1,end);
          }
          }
  int main()
  {
      void quicksort(int *a,int start,int end);
      void swap(int a,int b);
      int partitionindex(int *a,int start,int end);

      int a[8];
      cout<<"enter the array elements that to be sorted"<<endl;
      for(int i=0;i<8;i++)
      {
              cin>>a[i];
              }
              
        quicksort(a,0,7) ;
        
        
        cout<<"after the sorting the array looks like"<<endl;
             
          for(int p=0;p<8;p++)
      {
              cout<<a[p];
              cout<<endl;
              }
             
          
         system ("pause"); 
         return 0;
         }
          
          
          
          
          
          
          
          
          







