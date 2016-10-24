#include<iostream.h>
using namespace std;
int main()
{
       float triarea,rectarea,cirarea;
       int n;
       cout<<"enter 1.for circle area"<<endl;                    
                      cout<<"enter 2.for rectaNGLE area"<<endl; 
                      cout<<"enter 3.for triangle area"<<endl;
                      cin>>n;
                      int base,height,length,breadth,radius;
                      
                      switch(n)
                      {
                               case 1:
                                    cout<<"enter the value of the radius of circle"<<endl;
                                    cin>>radius;
                                    cirarea=3.14257*radius*radius;
                                    cout<<"the area of the circle is=="<<cirarea<<endl;
                                    break;
                              case 2:
                                    cout<<" theenter value of the length of rectangle"<<endl;
                                    cout<<" theenter value of the breadth of rectangle"<<endl;
                                    cin>>length>>breadth;
                                    rectarea=length*breadth;
                                    cout<<"the area of the rectangle is=="<<rectarea<<endl;
                                    break;      
      
                              case 3:
                                    cout<<" theenter value of the heigth, base of triangle"<<endl;
                                   
                                    cin>>height>>base;
                                    triarea=0.5*base*height;
                                    cout<<"the area of the triangle is=="<<triarea<<endl;      
                                   break;
                                   
                                   default :
                                           cout<<"wrong choice"<<endl;
                                           }
                                           
                                                             
       system ("pause") ;
       return 0 ;
       }
    
    
    
    
    
