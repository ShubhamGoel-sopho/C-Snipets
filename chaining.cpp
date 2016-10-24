#include<iostream>
#include<math.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
#define HASH_MAX 23
const int Max=20;
double const KNUTHVAL = (sqrt(5)-1)/2;
struct student
{
   char name[Max];
   int id;
   student *next;	
};

int inthash(int key)
{
	/////according to knuth statement//////

	return(floor((HASH_MAX)*fmod((key*KNUTHVAL),1))); 
}


student *createnode(char *name,int id)
{
	if(name != NULL)
	{
		
		
		student *temp = new student;
		strcpy(temp->name,name);
		temp->id = id;
		temp->next= NULL;
	    return temp;	
	}
	else
	{
		cout<<"Please supply the initial values to proceed"<<endl;
		return NULL;
	}
	
}

 void insertstart()
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















































int main()
{
	/*double x =(sqrt(5)-1)/2;
	cout<<x<<endl;
	cout.precision(3);
	cout<<x<<endl;
	int key = 5463*7;
	double val= key*0.8925;
	cout<<val<<endl;
	val =floor( 25*fmod( val, 1 ));
	cout<<val;*/
	/////hashing practise//////
	/////i will use chaining method////////
	
	
	/*create an lookup table of size 23 an prime no*/
	student *Hasharray[HASH_MAX];
    for(int i=0;i<HASH_MAX;i++)
    {
    	Hasharray[i] = NULL;
	}
    
	do
	{
		
		
		
		
	}wh
	
	
	
	
	
	
	
	
	
		
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
