#include<iostream.h>
#include<windows.h>
using namespace std;





void gotoXY(int x, int y) 
{     HANDLE hStdout;    
  COORD coordScreen = { 0, 0 };     
 hStdout = GetStdHandle(STD_OUTPUT_HANDLE);     
coordScreen.X = x;     
 coordScreen.Y = y;    
   SetConsoleCursorPosition( hStdout, coordScreen ); 
   }
   int main()
   {
       gotoXY(30,2);
       cout<<"hello world"<<endl;
       gotoXY(2,4);
       cout<<"##########"<<endl;
       char c='#';
       for(int i=5;i<12;i++)
       {
                        gotoXY(11,i);
                        cout<<c;
                        }
       for(int i=2;i<12;i++)
       {
               gotoXY(i,12);
               cout<<c;
               }
               for(int i=5;i<12;i++)
               {
                       gotoXY(2,i);
                       cout<<c;
                       }
       
       
       system ("pause");
       return 0;
       }
       
