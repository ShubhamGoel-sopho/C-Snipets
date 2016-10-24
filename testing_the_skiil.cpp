#include<iostream.h>
#include<string>
using namespace std;
int main()
{
    
    char *msg = "welcome back to coding";
    cout<<msg<<endl;
    puts(msg);
    char name[30];
    cout<<"enter the name name"<<endl;
    gets(name);
    char *ptr=name;
    cout<<name<<endl;
    cout<<ptr<<endl;
    for(int i =0;*ptr !='\0';i++)
    {
            cout<<*ptr<<"..";
            ptr++;
            
}
cout<<endl;
for(int k=0;name[k]!='\0';k++)
{
        cout<<name[k];
        }
        cout<<endl;
    char *top="you are tyhe topper";
                
  for(int i= 0;*top !='\0';i++) 
    {
            cout<<*top;   
            top++;     
            }
    
    char *tope ="my another skill";
    for(int i= 0;tope[i]!='\0';i++)
      
    {
            cout<<tope[i];
            
            }  
            cout<<endl;
            cout<<"my skillls continue"<<endl;
            char nam[50];
            char *pt=nam;
            cout<<"enter the another the name "<<endl;
            gets(pt);
            cout<<endl;
            cout<<pt<<endl;          
            
            
                       
    char *jkl = "welcome to the india";
  *jkl+2;
    cout<<jkl;
    
    char *person[5];
   for(int i=0;i<5;i++)
   {
           person[i]=new char[20];
           cout<<"enter the person"<<i<<endl;
           gets(person[i]);
           cout<<endl;
           }
         for(int i=0;i<5;i++)
   {
           
           cout<<" the person"<<i<<endl;
           puts(person[i]);
           cout<<endl;
           }                     
                 char *temp;
                 temp=person[2];
                 person[2]=person[3];
                 person[3]=temp;
                 
                 cout<<endl;
                   for(int i=0;i<5;i++)
   {
   
           cout<<" the person"<<i<<endl;
           puts(person[i]);
           cout<<endl;
           }
                 
                 
                 
                 
    
    system ("pause");
    return 0 ;
}
    
    
    
