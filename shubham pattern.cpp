#include<iostream.h>
#include<string.h>
using namespace std;
int main()
{
    char ch ;
    int n = 1;
    int p =0;
    for(int i =0;i<4;i++)
    {
            ch = 'A';
            for(int j=0;j<(n+i);j++)
            {cout<<ch;
           ch++;
            }
            ch--;
            for(int k=0;k<(p+i);k++)
            {
                    ch -=1;
                    cout<<ch;
                    
}
cout<<endl;
}



system ("pause");
return 0 ;
}
