#include<iostream.h>
#include<math.h>
#include<iomanip.h>
using namespace std;
int main()
{
    
    //programme to find the square ,cube,fouthpower ,fifth power, sqrt, log10.
    int i=1;
    cout<<"number  square   cube   forth power   fifth power   sqrt   log10"<<endl;
    cout<<"====== ======= ======= ============= ============= ======  ======= "<<endl;
    while(i<=20)
    {
           cout<<setw(6)<<i;
           cout<<setw(8)<<i*i;
           cout<<setw(6)<<i*i*i;
           cout<<setw(14)<<i*i*i*i;
           cout<<setw(13)<<i*i*i*i*i;
           cout<<setw(9)<<sqrt(i);
           cout<<setw(9)<<log10(i);
           cout<<endl;	
           i++;
           }
    
 
    
           
           
           system ("pause");
           return 0 ;
           }
           
           
    
