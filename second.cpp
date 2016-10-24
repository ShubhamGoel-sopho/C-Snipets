#include<iostream>
#include<fstream>
#include<process.h>
#include<string.h>
#include<stdio.h>
#include<iomanip>
using namespace std;
class employee
{
private:
char name[50];
char id[10];

float salary;
char designation[10];

public:

void readdetails();
void display();
void modify(employee& t);
char* getid()
{
    return id;
}


};

void employee ::readdetails()
{
    fflush(stdin);
    cout<<"ENTER THE EMPLOYEE'S NAME"<<endl;
    gets(name);
    cout<<"ENTER THE EMPLOYEE'S ID "<<endl;
    gets(id);
    cout<<"ENTER THE SALARY OF THE EMPLOYEE"<<endl;
    cin>>salary;
    fflush(stdin);
    cout<<"ENTER THE EMPLOYEE'S DESIGNATION"<<endl;
    gets(designation);
cout<<"THANKS FOR ENTERINGYOUR RECORD HAS BEEN SAVED"<<endl;
cout<<endl;
}
void employee ::display()

{

    cout<<"----------------------------------------------------------------------------------------------------"<<endl;
    cout<<"EMPLOYEE'S NAME:"<<name<<endl;
    cout<<"EMPLOYEE'S ID"<<id<<endl;
    cout<<"SALARY"<<salary<<endl;
    cout<<"DESIGNATION"<<designation<<endl;
    cout<<"----------------------------------------------------------------------------------------------------"<<endl;

}
void employee ::modify(employee &t)
{
    cout<<"ARE YOU REALLY SURE TO MODIFY THE DATA "<<endl;
    char ch;
    cin>>ch;
    if(ch== 'n')
{
return ;
}
    else
    {
        cout<<"OKK SO LET'S MODIFY YOUR DATA"<<endl;
            fflush(stdin);
    cout<<"ENTER THE EMPLOYEE'S NAME"<<endl;
    gets(t.name);
    cout<<"ENTER THE EMPLOYEE'S ID "<<endl;
    gets(t.id);
    cout<<"ENTER THE SALARY OF THE EMPLOYEE"<<endl;
    cin>>t.salary;
    fflush(stdin);
    cout<<"ENTER THE EMPLOYEE'S DESIGNATION"<<endl;
    gets(t.designation);
cout<<"THANKS YOUR DATA HAS BEEN MODIFIED SUCESSFULLY"<<endl;

    }
}


/*void deletet()
{
        cout<<"ARE YOU REALLY SURE TO DELETE THE DATA "<<endl;
    char ch;
    cin>>ch;
    if(ch== 'n')
    exit(0);
    else{
    cout<<"OKK LET'S DELETEYOUR DATA"<<endl;
    cout<<"PROCESSING"<<endl;



    }



}
*/
int main()
{
    fstream fout;
    employee emp;
    fout.open("emp.dat",ios::in|ios::out|ios::binary);
    if(!fout)
    {
        cout<<"error in opening the file"<<endl;

    }
    cout<<"enter how many record that you want to create in the database"<<endl;
    int n;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cout<<"employee:"<<i+1<<endl;
        emp.readdetails();
        fout.write((char*)&emp,sizeof(emp));


}
    cout<<"AFTERYOUR SUCESSFUL DATA ENTER HERE THE  RECORDS"<<endl;
    for(int i=0;i<n;i++)
    {
        fout.seekg(ios::beg);
        cout<<"employee:"<<i+1<<endl;
        fout.read((char*)&emp,sizeof(emp));
        emp.display();



    }
cout<<"enter which operation did you want to perform on the database"<<endl;
cout<<"1.) modify a record"<<endl;
cout<<"2.) delete a record"<<endl;
cout<<"enter your choice"<<endl;
int x;
cin>>x;
switch(x)
{
    case 1: fout.seekp(ios::beg);
     cout<<"welcome" <<endl;
                    fflush(stdin);
                     cout<<"enter the employee id "<<endl;
                     char i[10];
                     cin>>i;
                     cout<<"enter the new data"<<endl;
                     employee e;
                     fflush(stdin);
                     e.readdetails();
                     fstream fin;
                     fin.open("modal.dat",ios::in|ios::out|ios::binary);
                     if(!fin){
        cout<<"error in opening the file"<<endl;

    }

                     int z;
                      for(int i=0;i<n;i++);
                      {
                          fout.read((char*)&emp,sizeof(emp));
                          if(strcmp(i,emp.getid())==0)
                          {


                              fin.write((char*)&e,sizeof(e));
                          }
                          else
                          {
                              fin.write((char*)&emp,sizeof(emp));
                          }

                      }
     remove("emp.dat");
rename("mod.dat","emp.dat");
  cout<<"AFTERYOUR SUCESSFUL DATA ENTER HERE THE  RECORDS"<<endl;
    for(int i=0;i<n;i++)
    {
        fin.seekg(ios::beg);
        cout<<"employee:"<<i+1<<endl;
        fin.read((char*)&emp,sizeof(emp));
        emp.display();



}
break;
}
return 0;

}




