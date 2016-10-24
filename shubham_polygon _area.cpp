#include<iostream>
#include<cmath>
using namespace std;
struct point 
{
       double x;
       double y;
       };
       
 float getcrossproduct(point p1,point p2)
 {
       float result;
       result=(p1.x*p2.y-p2.x*p1.y);
       return result/2;
       }
        
      int main()
      {
          double calpolyarea(int n);
          cout<<"hey!!! this programme calculates the area of the polygons"<<endl;
          int n;
          cout<<"enter how many edges are there in the polygon"<<endl;
          cin>>n;
          
          double area;
          area=calpolyarea(n);
          
          
          cout<<"the calculated area of the area of the polygon is = "<<area<<endl;
          
          system ("pause");
          return 0;
          }
      
      double calpolyarea(int n)
      {
             point e[n];
             for(int i=0;i<n;i++)
             {
             cout<<"enter the coordinates of the "<<i+1<<"points"<<endl;
             cin>>e[i].x>>e[i].y;
             }
             double sum = 0;
             int j;
             for( j=0;j<n-1;j++)
             {
                     sum +=abs(getcrossproduct(e[j],e[j+1]));
       
       }
       sum +=abs(getcrossproduct(e[j-1],e[0]));
       
       return sum;
       
       
       
       }
       
       
            
       
