#include<iostream.h>
int main()
{
    int size;
    cout<<"enter how many elements in the array"<<endl;
    cin>>size;
    int *marks,*rollno;
    marks = new int [size];
    rollno = new int [size];
    if ((!rollno)||(!marks))
    {
                            cout<<"out of memory"<<endl;
                            return 1;
                            }
    cout<<"enter the rollno and marks"<<endl;
    for(int i = 0;i<size;i++)
    {
            cin>>marks[i]>>rollno[i];
            
            cout<<endl;
            }
            
       for(int i = 0;i<size;i++)
    {
           cout<<"\t"<<rollno[i]<<"\t\t"<<marks[i]<<"\n";
           }
           
           delete []rollno;
           delete[]marks;
           system ("pause");
           return 0 ;
           }      
