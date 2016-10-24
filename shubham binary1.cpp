#include<iostream.h>
#include<fstream.h>
#include<process.h>
using namespace std;
int main()
{
    char de[200];
    cout<<"enter the words of the text"<<endl;
    cin.getline(de,200);
           
    ofstream fout;
    fout.open("notes.txt",ios::out);
    if(!fout)
    {
             cout<<"can't open the file"<<endl;
             exit(1);
             }
             else
             cout<<"enter the words of the text"<<endl;
             fout<<de;
                
                fout.close();
                
                
                
                system ("pause");
                return 0;
                }
