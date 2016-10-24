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
      ////////////////////inserting the  data/////////////////
          
         
          char last = 'n';
          ofstream temp;
          ifstream fina;
          fina.open("Student.dat",ios::in);
          temp.open("temporary.dat",ios::out);
            if(!fina)
    {
             cout<<"Unable to open file!\n";
             exit(-1);
    }
                                    
              if(!temp)
    {
             cout<<"Unable to open file!\n";
             exit(-1);
    }
       cout<<"enter the data you want to insert in a sorted order"<<endl;
       s1.enterdata();
                                 
     while(!fina.eof()) 
     {
            fina.read((char*)&St,sizeof(St));                                                
       if(s1.Returnroll()<=St.Returnroll())
       {
                                           temp.write((char*)&s1,sizeof(s1));
                                           last = 'y';
                                           
                                           break;
                                           }
                                           else
                                           {
                                               temp.write((char*)&St,sizeof(St));
                                               }}
                                               
                     if(last == 'n')
                     {
                     temp.write((char*)&s1,sizeof(s1)); 
                     }
                     else if(!fina.eof())              
                     {
                         while(!fina.eof())
                         {fina.read((char*)&St,sizeof(St));
                         temp.write((char*)&St,sizeof(St));
                         }}
           temp.close();
           fina.close();
           remove("Student.dat");
           rename("temporary.dat","Student.dat");
                      
           
          
          
       ifstream fo;   

   fo.open("Student.dat",ios::in|ios::binary);

    while(!fo.eof())
    {
    fo.read((char*)&St,sizeof(St));
    St.DisplayData();
    }
    fo.close();
   
   system("pause");
   return 0 ;
}                     

