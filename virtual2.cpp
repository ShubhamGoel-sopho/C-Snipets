#include<iostream>
#include <bits/ios_base.h>
using namespace std;

//practising the pure virtual functions 
//creating the base abstract class whose object is never gonna instantiated
class numberdecimal
{
    private:
    int number;
    public:
    void get()
    {
    	cout<<"enter the no.."<<endl;
        cin>>number;
    }
    int retnumber()
    {
        return number;
    }
    
    virtual void shownumber() = 0;
};

class octal:public numberdecimal
{
  public:
  
  
  void shownumber()
  {
  	 cout<<"the octal representation of the no is:"<<endl;
     cout.unsetf(ios::dec);
     cout.setf(ios::oct | ios::showbase);
     
     cout << retnumber() << endl;
     cout.unsetf(ios::oct);
     cout.setf(ios::dec|ios::showbase);
  }
  
};



int main()
{
    octal b;
    b.get();
    b.shownumber();
    
    return 0;
}
