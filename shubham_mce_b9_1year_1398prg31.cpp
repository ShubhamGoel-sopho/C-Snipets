/////////////////////appending the data/////////////////////////////



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
{ Student st;
        ofstream fine;
        fine.open("Student.dat",ios::out|ios::app);
            if(!fine)
    {
             cout<<"Unable to open file!\n";
             exit(-1);
    }
                                   
    else
    {char ans = 'y';
        while(ans == 'y')
        {cout<<"now apppend the data in the file"<<endl;
         st.enterdata();
         fine.write((char*)&st,sizeof(st));
         cout<<"want to enter more records"<<endl;
         cin>>ans;
         }
         fine.close();
         } 
         
         
         cout<<"now the file is"<<endl;
           fine.open("Student.dat", ios::binary | ios::in);
    if(!fine)
    {
             cout<<"Unable to open file!\n";
             exit(-1);
    }
    
    ifstream fin;
    fin.open("Student.dat",ios::in|ios::binary);

    while(!fin.eof())
    {
    fin.read((char*)&st,sizeof(st));
    st.DisplayData();
    }
    fin.close();

                                                      
   system ("pause");
   return 0 ;
}
                                       
                                          
