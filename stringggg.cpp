#include<iostream>
#include<string.h>
using namespace std;
class inc
{
      private:
       int value;
       public:
       inc()
       {value=0;
            
            }
            inc(int val)
            { value=val;}
       inc operator++()
       {
           return inc(++value);
           }
           inc operator++(int)
       {
           
           
           return inc(value++);
           }
        void show() 
        {
             cout<<"the present value is"<<value<<endl;
             }
                
           
           
           
           }  ;           

int main()
{
inc idx1,idx2(5),idx3;
idx3=++idx2;
idx3.show();
idx2.show();
idx1.show();

const string s="Shubham goel";

cout<<endl;
string g;
cin>>g;

cout<<endl;
cout<<s<<endl;



system ("pause");
return 0;
}























