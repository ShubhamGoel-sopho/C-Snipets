/////////////////////////////////insertion  and deletion and merging in an array////////////////////////////////


#include<iostream.h>
#include<string.h>
#include<stdio.h>
using namespace std;
int ertarray(int a[],int item,int size)
{int pos;
    if(a[0]>item)
    pos = 0;
    
else
{
    
         for(int i=0;i<size-1;i++)
         {
                { if(a[i]<item&&item<a[i+1])
                 pos = i+1;break;}
                 }
                 if(item>a[size-1])
                 pos = size;
                 
                 }
                    
                 return pos; 
                 }



int findpos(int a[],int item, int size)
{
for(int i = 0;i<size;i++)
{
        if(item==a[i])
        return i;
        }
        return -1;
        }
        
        
         
  
  
  int main()
  {
      int a[50];
      int n;
      char ans = 'y';
      cout<<"enter how many elements in the array a[]"<<endl;
      cin>>n;
      cout<<"enter the elements of the array a in the sorted order"<<endl;
      for(int i = 0;i<n;i++)
      {
              cin>>a[i];
              cout<<endl;
              }
              cout<<"if you want to enter the element or delete the element in the array"<<endl;
              cout<<"enter 1. for addition of element in the array"<<endl;
              cout<<"enter 2. for deletion of element in the array"<<endl;
              cout<<"enter 3. for merging of the two array"<<endl;
              int choice;
              cin>>choice;
              switch(choice)
              {
                            case 1 :
                            int index;
                                 while(ans=='y')
                            {
                                 int bit;
                            cout<<"enter the element that you want to enter in the array"<<endl;
                            cin>>bit;
                            index=ertarray(a,bit,n);
                            for(int i = n-1;i>index;i--)
                            {
                                    a[i]=a[i-1];
                                    }
                                    a[index] = bit;
                                    
                            n +=1;
                            




cout<<"now the array is"<<endl;
 for (int i = 0 ;i<n;i++)
 {
     cout<<a[i]<<endl;
     }

                            cout<<"want to enter the more elements  y/n "<<endl;
                            cin>>ans;
                            
                            
                            }
                            break;
                            
                            
                            case 2:
                            while(ans=='y')
                            {
                            
                            int we;
                            cout<<"enter the element that you want to delete in the array"<<endl;
                            cin>>we;
                            if(n==0)
                            {
                                    cout<<"underflow"<<endl;
                                    exit(1);
                                    }
                                    
                            int index =findpos(a,we,n);
                            if(index !=-1) a[index] = 0;
                           { 
                            cout<<"the zero 0 signifies the deleted element"<<endl;
                            



cout<<"the array is shown below"<<endl;
cout<<"now the array is"<<endl;
 for (int k = 0 ;k<n;k++)
 {
     cout<<a[k]<<endl;
     }
     cout<<"after the emptified space the array is shown below"<<endl;
     
     for(int j=index;j<n;j++)
     {
                         a[j]=a[j+1];
                         }
                         
     n -=1;
     cout<<"now the array is"<<endl;
 for (int m = 0 ;m<n;m++)
 {
     cout<<a[m]<<endl;
     }
}

                            
                                                            
                            cout<<"want to delete more items"<<endl;
                            cout<<"press y for yes and n  for no"<<endl;
                            cin>>ans;
                            
                              }
                              break;
                         
                         case 3:
                             
                              int m;
                              cout<<"how mnamy elemnts are in the array b[]"<<endl;
                              cin>>m;
                              int mn =0;
                              mn=m+n;
                              int b[50];
                              int c[mn];
                              cout<<"enter the array b [] in that order "<<endl;
                              for(int w = 0;w<m;w++)
                              {
                                      cin>>b[w];
                                      cout<<endl;
                                      }
                               cout<<"enter 1.if the array b[] is ascending order"<<endl;
                              cout<<"enter2.if the array b[] is in descending order "<<endl;
                              int x;
                              cin>>x;
                              
                         
                              switch(x)
                              {
                                       case 1:
                                            int j,k,l;
                                            for(j=0,k=0,l=0;j<n&&k<m;)
                                            {
                                                                      if(a[j]>=b[k])
                                                                      c[l++]=b[k++];
                                                                      else
                                                                      c[l++]=a[j++];
                                                                      }
                                                                      if(j<n)
                                                                      {
                                                                             while(j<n)
                                                                             {
                                                                                       
                                            c[l++]=a[j++];
                                            }}
                                            
                                            else
                                            {
                                                while(k<m)
                                                {
                                                          c[l++]=b[k++];
                                                          }}
                                                          
                                                          
                                                          cout<<"after merging the array looks like"<<endl;
                                                          for(int g=0;g<mn;g++)
                                                          {
                                                                           cout<<c[g];
                                                                           cout<<endl;
                                                                           } break;          
                                       
                                       case 2:
                                            int f,g,h;
                                            for(f=0,g=m -1,h=0;f<n&&g>=0;)
                                            {
                                            if(a[f]<=b[g])
                                            c[h++]=a[f++];
                                            else
                                            c[h++]=b[g--];
                                            }
                                            if(f<n)
                                            {
                                                   while(f<n)
                                                   {
                                                             c[h++]=a[f++];
                                                             }}
                                                             else
                                                             {
                                                             while(g>=0)
                                                           {
                                       
                                                             c[h++]=b[g--];
                                                             }}
                                       
                                         cout<<"after merging the array looks like"<<endl;
                                                          for(int y=0;y<mn;y++)
                                                          {
                                                                           cout<<c[y];
                                                                           cout<<endl;
                                                                           }  break;         
                                       
                                       
                                       }
                              
                              


}
                            
                            
                            
                            
                            
                            
                            
                            
                            system ("pause");
                            return 0;
                            }
                            
                            
                            
              
              
      
