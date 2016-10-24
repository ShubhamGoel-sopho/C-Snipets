#include<iostream.h>
#include<string.h>
using namespace std;
int main()
{
    int count = 1;
    string black = "@@@@@@@@@@";
    string white  = "         ";
    string line = white+black+white+black+white+black+white+black;
    string line1=black+white+black+white+black+white+black+white;
    int i;
    
    for( i =1;i<9;i++)
    {
            if((i+2)%2==1)
    {
         for(int m =0;m<5;m++)
    
         {   cout<<line<<endl;}
            
            }
            else
            {
     for(int p =0;p<5;p++)
    {
            cout<<line1<<endl;
            }
            }}
            system ("pause");
            return 0 ;
            }
