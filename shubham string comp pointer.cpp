#include<iostream.h>
using namespace std;
char *wordmatch(char *s,char g);
int main()
{
    char string [50];
    cout<<"enter the sring "<<endl;
    gets(string);
    char ch;
    cout<<"enter the character to b searched"<<endl;
    cin>>ch;
    char *gh = NULL;
    
    gh=wordmatch(string,ch);
    if(*gh)
    {cout<<endl;
    for( ;*gh !='\0';gh++)
    cout<<*gh;
}    
    else
 cout<<"match didnot found"<<endl;
  
  system ("pause");
  return 0 ;
}
 
    
    
    
    
    
    
    
    
    
    
    
    
    char *wordmatch(char *s,char g)
    {
    
         for(;g !=*s;)
                 s++;
         
         
         return (s);
         
    
    
    
}
    
    
