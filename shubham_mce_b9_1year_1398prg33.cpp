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
}St,s1;

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
                                                                     
      
      int Rolla;
      char get = 'n';
      cout<<"enter the roll no. to which the data item is deleted"<<endl;
      cin>>Rolla;
      ifstream fino;
      ofstream written;
      fino.open("Student.dat",ios::in);
      written.open("tempo.dat",ios::out);
         if(!fino)
    {
             cout<<"Unable to open file!\n";
             exit(-1);
    }
  else
  {
  char an ;
      while(!fino.eof())
      {
                      fino.read((char*)&s1,sizeof(s1));
                        if(s1.Returnroll()==Rolla)
                        {s1.DisplayData();
                                                  get = 'y';
                                                  cout<<"do you really want to delete the data item  y\n"<<endl;
                                                  cin>>an;
                                                  if(an == 'n')
                                                   written.write((char*)&s1,sizeof(s1));

                                                  
                                                  }
                                                  else
                                                  {
                                                       written.write((char*)&s1,sizeof(s1));                                                                                     
                                          
                                          }}}
                                          
                           if(get=='n')
                           cout<<"the given roll no is not found in the data"<<endl;
                           
                           fino.close();
                           written.close();
                           
                                                          
                           
           
           
                                
                                 remove("Student.dat");
                              rename("tempo.dat","Student.dat");
                         cout<<"now the file is"<<endl;
           ifstream f;                

    f.open("Student.dat", ios::binary | ios::in);
    
   while(!f.eof())
   {
                     f.read((char*)&St,sizeof(St));
                     if(f.eof())break;
                     St.DisplayData();
                     }
                     f.close();
                     
                     system("pause");
                     return 0;
                     }
                                          
                                          
                                          
                                          
                                          
