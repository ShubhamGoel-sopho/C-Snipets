#include<iostream.h>
int main()
{

int row ,col;
int *val;
cout<<"enter the no of the rows in the 2d array"<<endl;
cin>>row;
cout<<"enter the columns in the 2d array"<<endl;
cin>>col;
val = new int [row*col];
int *rowsum,*colsum;
rowsum = new int [row];
colsum = new int [col];
int i,j;
cout<<"enter the elements of the 2d array"<<endl;
for (i=0;i<row;i++)
{
    rowsum[i] = 0;
    for(j=0;j<col;j++)
    {
          cin>>val[i*col+j];
          rowsum[i] +=val[i*col+j];
          }
          }
          for(j=0;j<col;j++)
          {colsum[j] = 0;
          for(i=0;i<row;i++)
          {
                               colsum[j] +=val[i*col+j];
                               }
                               }
                               cout<<"\n\nthe given array along with rowsum and colsum"<<endl;
                               for (i=0;i<row;i++)
{
    
    for(j=0;j<col;j++)
    {
                      cout<<val[i*col+j]<<'\t';
                      }
                      cout<<rowsum[i];
                      }
                      for(j=0;j<col;j++)
                      {
                                        cout<<colsum[j]<<'\t';
                                        }
                                        cout<<endl;
                                        system ("pause"); 
                                        return 0;
                                        }
                                        
                                        
