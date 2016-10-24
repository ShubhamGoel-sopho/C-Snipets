#include<iostream>
#include<fstream>
#include<iomanip>
#include<stdio.h>
#include<stdlib.h>
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

Student st;
    ifstream fout;

    fout.open("Student.dat",  ios::in);
    if(!fout)
    {
             cout<<"Unable to open file!\n";
             exit(-1);
    }
    
   while(!fout.eof())
   {
                   fout.read((char*)&st,sizeof(st));
                   
   
   
                   st.DisplayData();
                   } 
    
    
    fout.close();
    
    
    
    
  system ("pause");
return 0 ;
}
