#include<iostream.h>
using namespace std;
int main()
{
  //programme for binary search
  int a[100],i,n;
  char response;
  cout<<"enter the no of elements in the array"<<endl;
  cin>>n;
  cout<<"enter the elements in the array in ascending order"<<endl;
  
  for(i=0;i<n;i++)
  {
                  cin>>a[i];
                  }
                  int search;
                  cout<<"enter the elements to be seach for"<<endl;
                  cin>>search;
                  int first,middle,last;
                  first=0;
                  last = n-1;
                  middle= (first+last)/2;
                  
                  while(first<=last)
                  {
                      if(search==a[middle])
                      {
                                        cout<<"the given element is found at location = "<<middle+1<<endl;
                                        break;
                                        }
                                         if(search<a[middle])
                                         {
                                                          last=middle-1;
                                                          middle=(first+middle)/2;
                                                          }
                                                          else
                                                          {
                                                              first=middle+1;
                                                              middle=(first+last)/2;
                                                              }
                                                              }
                                                                             
                                   
      if(last<first)
         {                      cout<<search<<" is not found in the list\n";
                               cout<<"do you want to continue? (y/n)";
                               cin>>response;
                               }
           while(response == 'y' || response == 'Y') ;
                               
         

       system ("pause") ;
       return 0 ;
       }
    
    
    
    
    
