#include<iostream>
#include<iomanip>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    char x[50];

    cout<<"ENTER THE STRING OF YOUR CHOICE DONT PUT SPACE IN THAT"<<endl;
     gets(x);
    cout<<endl;
    cout<<"THE STRING ENTERED BY YOU IS:"<<endl;
     puts(x);
     cout<<"in diamondform the string is:"<<endl;
     int i=strlen(x);
     int m= i+2;
     char *obj= new char[m];

     int xo;
     for(xo=0;x[xo] !='\0';xo++)
{
    obj[xo]=x[xo];



}
obj[xo]='-';
obj[++xo]='\0';

/*cout<<"modified string is"<<endl;
puts(obj);*/
m=m-1;
int z=m;
for(int i=0;i<z;i++)
{
    if(m>-1)
    {


    for(int s=0;s<m;s++)
    {


        cout<<obj[s];
    }}

    cout<<endl;
    m--;


}







    return 0 ;

}
