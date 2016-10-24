#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<process.h>
#include<stdio.h>
#include<iomanip.h>
using namespace std;
int total =100;

int main()
{void play(int &bet);
    string n = "WELCOME TO THE CASINO GAME";
    string m=  "YOU ARE HAVING 100$ TO ENJOY";
    cout<<n<<endl;
    cout<<m<<endl;
    cout<<"IN OF THREE POSITIONS TELL US WHICH IS QUEEN IN AMONG KING,JACK"<<endl;
    string h ="*********************************************************************";
    for(int i=0;i<=4;i++)
    {
            cout<<h<<endl;
            }
            int bet;
    char ans;
    while(total>0)
    {
                  
    cout<<"ENTER YOUR BET AMOUNT"<<endl;
    cin>>bet;
    if(bet ==0||bet>total||bet <0)
    break;
    play(bet);
    cout<<h;
    
    cout<<"WANT TO PLAY MORE"<<endl;
    cin>>ans;
    if(ans=='n'||ans=='N')
    break;
    
}
    
    
     cout<<"THANKS FOR COMING OUR CASINO "<<endl;
     cout<<"HAVE A GREAT TIME****************"<<endl;
    
    system ("pause");
    return 0;
}


void play(int bet)
{
     char *p=new char[4];
     p[]= {'J','K','Q'};
     int *x=new int;
     int *y = (int*)malloc(sizeof(int));
     srand(time(NULL));
     for(int i =0;i<5;i++)
     {
           x=  rand()%3;
           y=rand()%3;
           char temp=p[x];
           p[x]=p[y];
           p[y]=temp;
           }
           int *w = new int;
     for(int i=0;i<3;i++)
     {
             if(p[i]== 'Q')
             {
                       w=i;
                       }}
                       
           cout<<"ENTER YOUR CHICE ON WHICH POSITION THE QUEEN IS 1 OR 2 OR 3 "<<endl;
           int *o=new int;
           cin>>o;
           if(o==(w+1))
           {
                       total += bet*3;
                       cout<<"YOU ARE CORRECT"<<p[0]<<p[1]<<p[2]<<endl;
                       cout<<"NOW YUR TOTAL IS"<<total<<endl;
                       
                       }
                       else
                     {
                             total -= bet;
                         cout<<"YOU ARE wrong"<<p[0]<<p[1]<<p[2]<<endl;
                       cout<<"NOW YUR TOTAL IS"<<total<<endl;
                       }
                       
                       
                       free(p);
                       free(x);
                       free(y);
                       free(o);
                       free(w);
                       }
                       
           

































