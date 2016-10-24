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
    numberdecimal(int x)
    {
        number = x;
    }
    int retnumber()
    {
        return number;
    }
    
    virtual void shownumber() = 0;
};

class binary:public numberdecimal
{
  public:
  binary(int x):numberdecimal(x){}
  
  void shownumber()
  {
  	 cout<<"the binary representation of the no is:"<<endl;
     cout.unsetf(ios::dec);
     cout.setf(ios::binary | ios::showbase);
     
     cout << retnumber() << endl;
     cout.unsetf(ios::binary);
     cout.setf(ios::dec|ios::showbase);
  }
  
};



int main()
{
    binary b(143);
    b.shownumber();
    
    return 0;
}
