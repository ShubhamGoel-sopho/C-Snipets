#include<iostream.h>
#include<iomanip.h>

int main()
{
    double  f=123.4567;
    cout<<setw(5)<<22<<setw(5)<<22<<endl;
    cout<<setw(7)<<22<<endl;
    cout<<setw(9)<<22<<endl;
    cout<<setw(11)<<22<<endl;
    cout<<setw(13)<<22<<endl;
    cout<<setw(11)<<22<<endl;
    cout<<setw(9)<<22<<endl;
    cout<<setw(7)<<22<<endl;
    cout<<setw(5)<<22<<endl;
    cout<<setprecision(5)<<f<<endl;
    cout.setf(ios::fixed);
     cout<<setprecision(5)<<f<<endl;
     cout.setf(ios::left);
     float g = 2.3;
     cout<<setprecision(5)<<f<<endl;cout.setf(ios::showpoint);
     cout<<setprecision(5)<<g<<endl;
    cout.setf(ios::scientific);
    cout<<setprecision(7)<<f<<endl;  
    
    
    
    
    
    system ("pause");
    return 0;
}
