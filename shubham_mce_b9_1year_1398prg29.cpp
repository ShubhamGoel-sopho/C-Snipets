///////////////////////////////////////////////////////////Student.cpp/////////////////////////////////////////////////////////////////////////////
#include<iostream>
#include<fstream>
#include<iomanip>
#include<stdio.h>
#include<stdlib.h>
#include<process.h>
using namespace std;


class Student
{int rollno;
char S_Admno[10];
char S_Name[30];
int Percentage;
public:
void enterdata();
void DisplayData();
int ReturnPercentage();
int Returnroll();
};

void Student::enterdata()
{cout<<"enter the roll no"<<endl;
cin>>rollno;
    cout<<"Enter the admission number : ";
    fflush(stdin);
    cin.getline(S_Admno, 10);
    cout<<"Enter the name of the student : ";
    cin.getline(S_Name, 30);
    cout<<"Enter the percentage marks : ";
    cin>>Percentage;
}

void Student::DisplayData()
{
     cout<<setw(12)<<S_Admno;
     cout<<setw(32)<<S_Name;
     cout<<setw(3)<<Percentage<<endl;
     cout<<setw(2)<<rollno<<endl;
}
int Student::ReturnPercentage()
{
    return Percentage;
}
int Student :: Returnroll()
{
    return rollno;
}


int main()
{


    ofstream fout;

    fout.open("Student.dat", ios::binary | ios::out);
    if(!fout)
    {
             cout<<"Unable to open file!\n";
             exit(-1);
    }
    Student St;
    char ans = 'n';
    do
    {
    St.enterdata();

    fout.write((char *) &St, sizeof(St));
    cout<<"More records?(y/n) : ";
    cin>>ans;
    }while(ans == 'y' || ans == 'Y');

    fout.close();

    ifstream fin;

    fin.open("Student.dat", ios::binary | ios::in);
    if(!fin)
    {
             cout<<"Unable to open file!\n";
             exit(-1);
    }

    while(fin.read((char *) &St, sizeof(St)))
    {
    
    St.DisplayData();
    }
    fin.close();

 ifstream fi;
 fi.open("Student.dat",ios::in|ios::binary);
 int roll;
 char found = 'n';
 cout<<"enter the rollno to be searched for"<<endl;
 cin>>roll;
 while(!fi.eof())
{
                 fi.read((char*)&St,sizeof(St));
                 if(St.Returnroll()==roll)
                 {
                                          St.DisplayData();
                                          found = 'y';
                                          break;
                                          }
                                          }
                                          if (found=='n')
                                          cout<<"rollno is not found in the list"<<endl;
                                          fi.close();
                                          

     
                                          
        
                                                                                                                                                                              
                                         
            
                                          
                                          
                                          

system ("pause");
return 0 ;
}
