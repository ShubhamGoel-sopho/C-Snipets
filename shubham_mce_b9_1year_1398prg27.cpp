/*Programming Problem
Write a program in C++ to implement the following class:
class student{int rollno;
            char name[40];
            char Class;
            char grade;
            float marks;
            public:
            void getdata(); 	//to get the data of students
            void display();	//to display the data
            int getrno();	//to return the roll no.
        };
and write the objects of the following class in a file student.dat and assign the grade as follows:
if (marks>=75 ) then grade='A'
if(marks >= 60 and marks <75) then grade='B'
 if(marks>=50 and marks <60) then grade='C';
 if (marks>=40 and marks < 50) then grade='D';
 if(marks < 40) then  grade='F'*/

#include<iostream.h>
#include<fstream.h>
#include<stdio.h>
using namespace std;

class student{int rollno;
            char name[40];
            char Class;
            char grade;
            float marks;
            public:
            void getdata(); 	//to get the data of students
            void display();	//to display the data
            int getrno();	//to return the roll no.
        };
void student :: getdata()
{
     cout<<"enter the name of student"<<endl;
     fflush(stdin);
     cin.getline(name,40);
     fflush(stdin);
     cout<<"enter the class of student"<<endl;
     cin>>Class;
     fflush(stdin);
     cout<<"enter the roll no. of the student"<<endl;
     cin>>rollno;
     fflush(stdin);
     cout<<"enter ther marks obtained by the student"<<endl;
     cin>>marks;
     if (marks>=75 )  grade='A';
else if(marks >= 60) grade='B';
else if(marks>=50 )  grade='C';
else if (marks>=40)  grade='D';
 else   grade='F';
}
void student ::display()
{
     cout<<name<<", Roll no. "<<rollno<<" has "
    <<" marks "<<marks<<" and grade "<<grade<<"\n";
}
int student ::getrno()
{
    return rollno;
}
int main()
{
    ofstream filin;
    filin.open("student.dat",ios::out| ios::binary);
    if(!filin)
    {
        cout<<"Cannot open file!!!\n";
        return 1;

    }
    cout<<"Enter data for students : \n";
    char ans='y';
    student s;
    while (ans=='y')
    {
        s.getdata();
        filin.write((char*)&s, sizeof(s));
        cout<<"\nRecord written to file.\n";
        cout<<"More records?(y/n) ";
        cin>>ans;
    }
    filin.close();
    ifstream fin;

   fin.open("student.dat", ios::in| ios::binary);

   while( fin.read((char*)&s, sizeof(s)))
   {

    s.display();
    }
    fin.close();
    system ("pause");
    return 0;
}


     

