#include<iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
using namespace std;
const int Max = 30;


/////////////////////////implementation of the trie data structure////////////////
//////////////////university structure can have atmost 4 levels//////////////////
struct  university 
{
 	char Name[Max];
	university *arr[10]; 	
	
};
/////////////////////////////////////////////////////////////////////////////////

university *createemptynode()
{
	university *temp = new university;
	strcpy(temp->Name," ");
	for(int i=0;i<10;i++)
	{
		temp->arr[i] = NULL;
	}
	
	
	return temp;
}

university *createnode(university *root,int *key,char *name)
{
	university *temp = root;
	int i=0;
	for(i;i<4;i++)
	{
		if(temp->arr[key[i]] == NULL)
		{
			
			temp->arr[key[i]] = createemptynode();
			temp = temp->arr[key[i]];
		}
		else
		{
			temp = temp->arr[key[i]];
		}
	}
	strcpy(temp->Name,name);
	
	
	
	
	
	
}










int main()
{
	////////some variables for use/////
	int key[4];
	char name[Max];
	
	
	////////////////////////////////
	int intchoice;
	char choice;
	char ch;
	university *root = createemptynode();
	do
	{
		cout<<"enter 1 for insert in the table :>"<<endl;
		cout<<"enter 2 for to lookup value in the table :> :>"<<endl;
		cout<<"enter 3 to delete a particular value in the table :> :> :>"<<endl;
		cin>>intchoice;
		switch(intchoice)
		{
			case 1:
				{
					cout<<"enter the name of the university to be added :"<<endl;
					cin.get(ch);
					gets(name);
					cout<<"Ok Great NOW :"<<endl;
					cout<<"enter the founded year of the university :"<<endl;
					for(int i=0;i<4;i++)
					{
						cin>>key[i];
					}
					cout<<endl;
					cout<<"you entered :"<<endl;
					cout<<"name : ";
					cout.write(name,Max);
					cout<<endl;
					cout<<"foundation year: ";
					for(int k=0;k<4;k++)
					{
						cout<<key[k];
					}
					cout<<endl;
			        
			        root = createnode(root,key,name);
			        
			        
			        
			        
			        
			        
					//university *node =createemptynode();
				    /*for(int i=0;i<10;i++)
					{
                          cout<<node->arr[i] <<endl;
					}
					
					
					
					
				    /*cout.write(key,5);
				    //fflush(stdin);
					//cin.get(name,Max);
					cin.getline(key,5);
					cout<<endl;*/
					
					
					
					
					break;
				}
			case 2:
			    {
			    	
			    	break;
			    }
			case 3:
				{
					break;
			    }
			default:
			    {
			    	cout<<"): wrong choice entered :("<<endl;
			    	break;
		        }	 		
		}
		
		
	cout<<"enter y to continue"<<endl;
	cin>>choice;
	}while(choice == 'y');
	
	
	
	
	
	
	
	
	
	return 0;
}







