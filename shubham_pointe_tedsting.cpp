#include<iostream.h>
#include<stdio.h>
#include<ctype.h>
using namespace std;
int main()

{
    char *msg ="welcome";
    for(int i=strlen(msg)-1;i>=0;i++)
    {
            if(islower(msg[i]))
            msg[i]=toupper(msg[i]);
            else
            if(isupper(msg[i]))
            {
            if(i%2 !=0)
            msg[i]=tolower(msg[i-1]);
            else
            msg[i--];
            }}
            cout<<msg<<endl;
            
            
    
    system ("pause");
    return 0;
}
    
