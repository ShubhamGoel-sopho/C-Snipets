/*Programming Problem
Assuming the class Student as declared below; write a complete program in C++
(a) to write the objects of Student to a binary file Student.dat
(b) to read the objects of Student from this file and display those student details whose percentage is more than 75.
class Student
{
char S_Admno[10];
char S_Name[30];
int Percentage;
public:
void enterdata();
void DisplayData();
int ReturnPercentage();
};
NOTE:-You have to implement member functions accordingly.*/



#include<iostream>
#include<fstream.h>
#include<stdio.h>
#include<iomanip.h>
#include<stdlib.h>
using namespace std;

class Student
{
char S_Admno[10];
char S_Name[30];
int Percentage;
public:
void enterdata();
void DisplayData();
int ReturnPercentage();
};


void Student:: enterdata()
{
     cout<<"enter the admission no. of the student"<<endl;
     fflush(stdin);
     cin>>S_Admno;
     cout<<"enter the student name"<<endl;
     cin.getline(S_Name,30);
     cout<<"enter the %"<<endl;
     cin>>Percentage;
}
void Student::DisplayData();
{
     cout<<"admission no -----> "<<S_Admno<<endl;
     cout<<"name of student ------> "<<S_Name<<endl;
     cout<<"percentage -------> "<<Percentage<<endl;
     }
int Student::ReturnPercentage()
{
    return Percentage;
}
int main()
{
        ofstream fout;
        char ans ;
        fout.open("student.dat",ios::out||ios::binary);
        if(!fout)
        {
                 cout<<"file cant b open"<<endl;
                 exit(-1);
                 }
                 else
                 do
                 {
                     Student st;
                     st.enterdata();
                     fout.write((char*)&st,sizeof(st)); 
                     cout<<"more records"<<endl;
                     cin>>ans;
                     }while(ans=='y'||ans=='Y')
                     fout.close();
                     
                     
                     ifstream fin;
                     fin.open("student.dat",ios::in||ios::binary);
                     if(!fin)
                     {cout<<"file cant b open"<<endl;
                 exit(-1);
                 }
                 else
                 fin.read((char*)&st,sizeof(st));
                 if(ReturnPercentage()>75)
                 st.DisplayData();
                 }
                 fin.close();
                 
                 system ("pause");
                 return 0;
                 }
     



