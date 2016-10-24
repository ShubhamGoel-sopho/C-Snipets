#include<iostream>
using namespace std;//////////////to find the direction of a point from line segment/////
struct point {
       float x;
       float y;
       };
       int getdirection(point p1,point p2,point p3);
        void subtract(point r,point s);
           float getcrossproduct(point v,point u );
       int main()
       { 
           point a,b,c;
           cout<<"enter the point A CORDINATES"<<endl;
           cin>>a.x>>a.y;
           cout<<"ENTER THE POINT B OF THE LINE AB COORDINATES"<<endl;
           cin>>b.x>>a.y;
           cout<<"enter the coordinates of the point p"<<endl;
           cin>>c.x>>c.y;
          int result= getdirection(a,b,c);
          if(result==1)
          {
                       cout<<"the point lies in the left of the line AB"<<endl;
                       }
                     else   if(result==-1)
          {
                       cout<<"the point lies in the right of the line AB"<<endl;
                       }
                       else
                       cout<<"the oint lies on the line"<<endl;
                       
           
           
           system ("pause");
           return 0 ;
           }
           
           
 int getdirection(point p1,point p2,point p3)
 {
     int left =1,right = -1,online = 0;
     subtract(p1,p1);
     subtract(p2,p1);
     subtract(p3,p1);
     float result= getcrossproduct(p2,p3);
     if(result > 0)
     return left;
     else if(result<0)
     return right;
     else 
     return online;
     }
     void subtract(point r,point s)
     {
          r.x=r.x-s.x;
          r.y=r.y-s.y;
          }
          float getcrossproduct(point v,point u )
          {
                float res;
                res=(v.x*u.y)-(u.x*v.y)   ;
                return res;
                }
      
           
       
