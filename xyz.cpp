#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
const int Max = 20;
struct student
{
   char name[Max];
   int id;
   student *next;	
};

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
	
	
	/*create an lookup table of size 17 an prime no*/
/*	student *Hasharray[17];
	student **temp= Hasharray;
	int i=0;
	for(temp;temp != &Hasharray[16];temp++)
	{
		temp[i] = NULL;
		i++;
	}
	
	i = 0;
	for(i;i<17;i++)
	{
		cout<<Hasharray[i]<<endl;
	}*/
	
	
	int long long sum = pow(33,44);
	cout<<sum<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
