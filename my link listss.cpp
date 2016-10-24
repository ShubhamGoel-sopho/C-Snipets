//basic link list implementations
#include<iostream>
#include<string.h>
#include<algorithm>
#include<iomanip.h>
using namespace std;
void insert(char *name,int rolln,int mark);
void insertstart(char *name,int rolln,int mark);
void insertatn(char *name,int rolln,int mark,int n);
void deletelist(int n);

void reverselistiter();
void print();

struct node
{
       char name[20];
       int rollno;
       float marks;
       node *link;
};
node* HEAD=NULL;
void reverselistrec(node* t);








int main()
{
   /* int num;
    cout<<"enter the no 10 times"<<endl; 
    
    int arr[10];
    int *arrp;
    for(arrp=arr;arrp<&arr[10];arrp++)
    {
    cin>>num;
    *arrp = num;}

sort(arr,arr+10);
cout<<"the array now is"<<endl;
int *arrp2;
    for(arrp2=arr;arrp2<&arr[10];arrp2++)
    {   
  cout<<  *arrp2; 
}



cout<<endl;*/

cout<<"\t\HEY WELCOME TO MY BASIC LINK LIST IMPLEMENTATION PROGRAMME"<<endl;
cout<<"*******************************************************************************"<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;
int mynum;
cout<<"\tENTER YOUR CHOICE ACCORDING TO YOUR NEED"<<endl;
cout<<"$$$$$$$$-##########-@@@@@@@@@@-!!!!!!!!!-***********-&&&&&&&&&&-^^^^^^^^^^"<<endl;
cout<<"\t\1. TO INSERT THE ITEMS AT THE END OF LIST"<<endl;
cout<<"\t\2. TO INSERT THE ITEMS AT THE START OF LIST"<<endl;
cout<<"\t\3. TO INSERT THE ITEMS AT ANY POSITIONS YOU WANT"<<endl;
cout<<"\t\4. TO DELETE THE ITEM FROM YOUR DESIRED POSITION"<<endl;
cout<<"\t\5. TO REVERSE THE LIST"<<endl;
cout<<"\t\6. TO PRINT THE LIST "<<endl;

int ans;
do{
             
cout<<"ENTER ANY NUMBER BY WHICH YOU WANT TO IMPLEMENT THE LIST"<<endl;
cin>>mynum;

switch(mynum)
{
       case 1: {
            int n;
            cout<<"ENTER HOW MANY RECORS OF STUDENTS DID YOU HAVE"<<endl;
            cin>>n;
            for(int i=0;i<n;i++)
            {
           cout<<"ENTER THE NAME OF THE STUDENT"<<endl;
           char name[20];
           fflush(stdin);
           gets(name);
           cout<<"ENTER THE ROLL NO OF THE STUDENT"<<endl;
           int roll;
           cin>>roll;
           cout<<"ENTER THE MARKS OBTAINED BY THE STUDENT"<<endl; 
           float marks;
           cin>>marks;
            insert(name,roll,marks);
           }
           cout<<"AFTER YOUR ADITION IN THE STUDENT RECORD THE LIST LOOKS LIKE"<<endl;
           cout<<"*******************************************************************************"<<endl;
           cout<<"-------------------------------------------------------------------------------"<<endl;
           print();
             } break;
         case 2:
              { int n;
            cout<<"ENTER HOW MANY RECORS OF STUDENTS DID YOU HAVE"<<endl;
            cin>>n;
            for(int i=0;i<n;i++)
            {fflush(stdin);
           cout<<"ENTER THE NAME OF THE STUDENT"<<endl;
           char *p=new char[20];
           fflush(stdin);
           gets(p);
           
           cout<<"ENTER THE ROLL NO OF THE STUDENT"<<endl;
           int roll;
           cin>>roll;
           cout<<"ENTER THE MARKS OBTAINED BY THE STUDENT"<<endl; 
           float marks;
           cin>>marks;
            insertstart(p,roll,marks);
           }
           cout<<"AFTER YOUR ADITION IN THE STUDENT RECORD THE LIST LOOKS LIKE"<<endl;
           cout<<"*******************************************************************************"<<endl;
           cout<<"-------------------------------------------------------------------------------"<<endl;
           print();
             } break;
        case 3:{
        
            
            
            
            
           cout<<"ENTER THE NAME OF THE STUDENT"<<endl;
           char name[20];
           gets(name);
           cout<<"ENTER THE ROLL NO OF THE STUDENT"<<endl;
           int roll;
           cin>>roll;
           cout<<"ENTER THE MARKS OBTAINED BY THE STUDENT"<<endl; 
           float marks;
           cin>>marks;
           int no;
           cout<<"ENTER THE POSITION WHERE TO ADD THE STUDENT FIELD"<<endl;
           cin>>no; 
            insertatn(name,roll,marks,no);
           
           cout<<"AFTER YOUR ADITION IN THE STUDENT RECORD THE LIST LOOKS LIKE"<<endl;
           cout<<"*******************************************************************************"<<endl;
           cout<<"-------------------------------------------------------------------------------"<<endl;
           print();
             } 
             
             break;
           case 4: 
                {
                  int n;
                  cout<<"ENTER FROM WHICH POSITION THE DATA IS TO BE DELETED"<<endl;
                  cin>>n;
                  deletelist(n);
                    cout<<"AFTER THE DELETION THE LIST LOOKS LIKE"<<endl;
                    cout<<"*******************************************************************************"<<endl;
                    cout<<"-------------------------------------------------------------------------------"<<endl;
                    print(); 
                    break;    
                  }   
           case 5:{cout<<"SO NOW YOU WANT TO REVERSE THE LIST OKAY!!!"<<endl;
                   cout<<"I WILL DO IT FOR YOU"<<endl;
                   cout<<"ENTER 1. FOR USING ITERATIVE METHOD"<<endl;
                   cout<<"ENTER 2. FOR USING RECURSIVE METHOD"<<endl;
                   int num;
                   cin>>num;
                   if(num==1)
                   reverselistiter();
                   else
                   cout<<"THE LIST SHOULD NOT BE EMPTY"<<endl;
                   reverselistrec(HEAD);
                   cout<<"AFTER THE REVERSAL OF THE LIST BY YOUR CHOICE"<<endl;
                   cout<<"THE LIST LOOKS LIKE"<<endl;
                   cout<<"*******************************************************************************"<<endl;
                   cout<<"-------------------------------------------------------------------------------"<<endl;
                   print();
                   }
             break;
             case 6:
                  
                  cout<<"THE LIST LOOKS LIKE"<<endl;
                  cout<<"*******************************************************************************"<<endl;
                  cout<<"-------------------------------------------------------------------------------"<<endl;
                  print();
                  
             
                  cout<<endl;
                  break;
                  
             default: cout<<"WRONG OPTION SELECTED"<<endl;
          
             }
cout<<"ENTER ANY NO BETWEEN 1-99 TO CARRY OUT FURTHER OPERATIONS HERE"<<endl;
cin>>ans;
}while(ans>0&&ans<100);



system ("pause");
return 0 ;
}


void insert(char *name,int rolln,int mark)
{
     node *temp;
     temp=new node;
     
     
    strcpy((temp->name),name);
    temp->rollno=rolln;
    temp->marks=mark;
    temp->link=NULL;
    if(HEAD==NULL)
    HEAD=temp;

else
{ struct node *temp1;
temp1=HEAD;
while(temp1 !=NULL)
{
            temp1=temp->link;
            }
            temp->link=temp;
}}
void print()
{
     node *temp=HEAD;
     while(temp !=NULL)
     {
         cout<<"NAME";puts(temp->name);cout<<endl;
         cout<<"ROLLNO..."<<temp->rollno<<endl;
         cout<<"MARKS=="<<temp->marks<<endl;
         temp=temp->link;
         cout<<"------------------------------------------------------------------------------"<<endl;
         }
         
         }
  void insertstart(char *name,int rolln,int mark)
{
     node *temp;
     temp=new node;
     
     
    strcpy((temp->name),name);
    temp->rollno=rolln;
    temp->marks=mark;
    temp->link=NULL;
    if(HEAD==NULL)
    HEAD=temp;
    else
    temp->link=HEAD;
    HEAD=temp;
}
void insertatn(char *name,int rolln,int mark,int n)
{
     if(n<0)
     {
            cout<<"BAD CHOICE"<<endl;
            return;
            }
            int no=1;
            node *t=HEAD;
            while(t !=NULL)
            {
                    no++;
                    }
               if(n>(no+1))
               return;     
     node *temp;
     temp=new node;
     
     
    strcpy((temp->name),name);
    temp->rollno=rolln;
    temp->marks=mark;
    temp->link=NULL;
    if(n==1)
    {
            temp->link=HEAD;
            HEAD=temp;
            }
            
            
    else         
    {
                 node *temp1=HEAD;
                 for(int i=1;i<(n-1);i++)
                 { 
                      temp1=temp1->link;
                      } 
                      temp->link=temp1->link;
                      temp1->link=temp;
                      
}}


void deletelist(int n)
{
     if(HEAD==NULL)
     {
                   cout<<"THE LIST IS EMPTY DONT FOOL ME"<<endl;
                   return ;
                   }
                   node *temp=HEAD;
                   
       for(int i= 1;i<(n-1);i++)
       {
            temp =temp->link;
            }
            node *t;
            t=temp->link;
            temp->link=t->link;
            
            delete t;
}

void reverselistiter()
{
    if(HEAD==NULL)
    {
              cout<<"THE LIST IS EMPTY DONT FOOL ME"<<endl;
              cout<<"HOW I CAN REVERSE THE LIST"<<endl;
                   return ;
                   }                      
       else
     {  node *temp;
       temp=HEAD;
       node *next,*prev;
       prev==NULL;
       while (temp !=NULL)
       {
       next=temp->link;
       temp->link=prev;
       prev=temp;
       temp=next;
       
       
       }}}
       
       
void reverselistrec(node *t)
{
      if(t->link=NULL)
      {
                      t->link=HEAD;
                      return ; 
                      }
                      reverselistrec(t->link) ;
                     node *temp= t->link;
                     temp->link=t;
                     
                      t->link=NULL;
                      }
                      
 /*void printreversel(node *l)
 {
      if(l==NULL)
      {
                 return ;
                 }
                 printreversel(l->link);
                 cout<<"NAME";puts(l->name);cout<<endl;
         cout<<"ROLLNO..."<<l->rollno<<endl;
         cout<<"MARKS=="<<l->marks<<endl;
         
         cout<<"----------------------------------------------------------------------------------------"<<endl;
         }
*/
                                                          

     
     

 
        
                              



    
    
