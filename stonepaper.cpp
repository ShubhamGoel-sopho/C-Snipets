#include<iostream>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
void playstone(int x,int y)
{
    char f[10];
    switch(x)
    {
        case 1: strcpy(f,"stone");
                        break;
        case 2: strcpy(f,"paper");
        break;
        case 3: strcpy(f,"scissors");
        break;
    };
    if((y==1&&x==1)||(y==1&&x==1)||(y==3&&x==3))
    {
        cout<<"TIED"<<endl;
        cout<<"PLAY AGAIN"<<endl;

    }
    else if((y==1&&x==2)||(y==3&&x==1)||(y==2&&x==3))
    {
        cout<<"COMPUTER WINS"<<endl;

    }
    else if((y==1&&x==3)||(y==2&&x==1)||(y==3&&x==2))
    {
        cout<<"YOU WIN"<<endl;
    }

}
int main()
{
    unsigned int seed;
    time_t t;
    seed=(unsigned)time(&t);
    srand(seed);

    cout<<"HEY WELCOME TO THIS INTERESTING GAME"<<endl;
    cout<<"-----------------------********************...............................################"<<endl;
    cout<<"GAME IS----- STONE ------PAPER------SCISSORS"<<endl;
    cout<<"enter y to play or n to return" <<endl;
    char c;
    cin>>c;
    if(c=='n')
    {
        return -1;
    }
    cout<<"so you want to play"<<endl;
    cout<<"okk when you get tired after playing this plz press 0 to stop"<<endl;
    cout<<"enter 1. for stone*****2. for paper*****3.  for scissors"<<endl;
    int v=1;
    int x;
    int y;
    while(v)
    {
        x=(rand()%3)+1;
        cout<<"enter now"<<endl;
        cin>>y;
        playstone(x,y);
        cout<<"want to play again enter 1 otherwise enter 0"<<endl;
        cin>>v;

}


    return 0 ;

}
