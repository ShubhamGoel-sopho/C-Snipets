#include<iostream>
#include<fstream>
#include<iomanip>
#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#include<string.h>
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
void modify();
}st,s1;

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
void Student :: modify()
{
     char nm[20] = " ";
     char ad[10] = " ";
     int mark;
     fflush(stdin);
     cout<<"name is"<<S_Name<<endl;
     cout<<"admission no. is "<<S_Admno<<endl;
     cout<<"Roll no. is"<<rollno<<endl;
     cout<<"percentage obtained by the student is "<<Percentage<<endl;
     cout<<"enter new details "<<endl;
     fflush(stdin);
     cout<<"enter (.)to retain old one name"<<endl;
     cin.getline(nm,20);
     fflush(stdin);
     cout<<"enter (.) to retain old admission no. "<<endl;
     cin.getline(ad,10);
     fflush(stdin);
     cout<<"enter (-1to retain old percentage  "<<endl;
     cin>>mark;
     
     
     if(strcmp(nm,".")!=0)
     
                          strcpy(S_Name,nm);
     if(strcmp(ad,".")!=0)
     strcpy(S_Admno,ad);
     if(mark != -1)
     Percentage = mark;
     }
     

//////////////////modifying the record/////////////////////////

int main()
{char found  = 'n';
   fstream fin;
   fin.open("Student.dat",ios::in|ios::binary|ios::out);
   if(!fin)
{
           cout<<"the file couldnt be opened"<<endl;
           exit(-1);
           }
           else
           {int rol;
               cout<<"enter the roll no of record which data is modified"<<endl;
               cin>>rol;
               while(!fin.eof())
               {long pos = fin.tellg();
                                
                                fin.read((char*)&st,sizeof(st));
                                if(st.Returnroll()==rol)
                                {
                                st.modify();
                                fin.seekg(pos);
                                fin.write((char*)&st,sizeof(st));
                                found  = 't';
                             
                                break;
                                }}
                                if(found == 'n')
                                cout<<"the record is not found in the file!!!"<<endl;
                                fin.seekg(0);
                                fin.close();
                                
                                cout<<"now the file contains contains"<<endl;
                                ifstream file;
                                file.open("Student.dat",ios::in);
                                while(!file.eof())
                                {if(file.eof())
                                break;
                                                  file.read((char*)&s1,sizeof(s1));
                                                  s1.DisplayData();
                                                  }

file.close();
}

system ("pause");
return 0 ;
}



























