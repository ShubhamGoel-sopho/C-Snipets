#include<iostream.h>
#include<process.h>
using namespace std;
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int m,n,o,p;
    int i,j,k,l;

    cout<<"matrix multiplication"<<endl;
    cout<<"enter the value of no of rows in matrix A"<<endl;
    cin>>m;
    cout<<"enter the value of no of columns of matrix A"<<endl;
    cin>>n;
     cout<<"enter the value of no of rows in matrix B"<<endl;
    cin>>o;
    cout<<"enter the value of no of columns of matrix B"<<endl;
    cin>>p;
    if(n!=o)
    {
            cout<<"the matrix are not compatible for multiplication"<<endl;
            exit(0);
            }
            else
            {cout<<"enter the elements in the matrices"<<endl;
            
                for(i=0;i<m;i++)
                
                {
                                for(j=0;j<n;j++)
                                {
                                    cin>>a[i][j];
                                    
                                    }  
                                    }
                                    cout<<"now enter theelements in the matrix B"<<endl;
                                              
       for(k=0;k<o;k++)
                
                {
                                for(l=0;l<p;l++)
                                {
                                    cin>>a[k][l];
                                   
                                    }  
                                    }
                                    
                                 for(i=0;i<m;i++)
                                 {
                                                 for(j=0;j<p;j++)
                                                 {int s =0;
                                                  for( k = 0; k < n; k++)
                                                                 s =  s+(a[i][k]*b[k][i]);
                                                                 c[i][j]=s;
                                                                 }}
                                                                    cout<<"Product of the matrices :\n ";

    for(i = 0; i <m; i++)
       {   for(j = 0; j <n; j++)
            {
                
                cout<<c[i][j]<<endl;
                }}}
system ("pause");
     return 0;   }


                                                                 
                                                                 
                                                                 
                                                                 
                                    
                                              
