#include<iostream.h>
#include<fstream.h>
#include<string.h>

using namespace std;
struct account
{
       char name[50];
       int balance;
       };
       
       int main()
       {
           account saving;
           cout<<"enter the name of the customer"<<endl;
         cin>>saving.name;
           cout<<"enter the available balance"<<endl;
           cin>>saving.balance;
           ofstream fout;
           fout.open("savbal",ios::out|ios::binary);
           if(!fout)
           {
                    cout<<"file cant be opened"<<endl;
                    return 1;
                    }
                    else
                    {
                        fout.write((char*)&saving,sizeof(saving));
                        fout.close();
                        ifstream fin;
                        fin.open("savbal",ios::in|ios::binary);
                        fin.read((char*)&saving,sizeof(saving));
                        cout<<saving.name;
                        cout<<"has balnce of"<<saving.balance<<"\n";
                        fin.close();}
                        system("pause");
                        return 0;
                        }
                        
           
           
