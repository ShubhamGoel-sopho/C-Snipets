#include<iostream.h>
#include<iomanip.h>
using namespace std;
int main()
{
    double kelvin,farh,cel;
    cout<<"========================= TEMPERATURE CONVERSION TABLE ================="<<endl;
    cout<<" CELCIUS---------KELVIN--------------FARHENHEITE"<<endl;
    cel= -270;
    while(cel<=270)
    {
                   kelvin= cel+273.15;
                   farh=(1.8*cel)+32;
    cout<<setw(7)<<cel;
    cout<<setw(16)<<kelvin;
    cout<<setw(18)<<farh<<endl;
    cel=cel+5;
}

                                   
       system ("pause") ;
       return 0 ;
       }
    
    
    
    
    
