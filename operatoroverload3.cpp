#include<iostream>
using namespace std;
///////////conversion of one class object to another /////
/*using operator overloading */

const float pi = 3.14;
class Radian
{
	private:
		float rad;
	public:	
	Radian()
	{
		rad = 0.0;
	}
	Radian(float x)
	{
		rad = x;
	}
	float getrad()
	{
		return rad;
	}
	
	
	
	
};
class Degree
{
	private:
		float degree;
	public:
		Degree()
		{
			degree = 0.0;
		}
		
		
	Degree(Radian R)
	{
		degree = R.getrad()*180.0/pi;
    } 	
    	float get()
    	{
    		return degree;
		}
	operator Radian()
	{
		return degree*pi/180.0;
		
    }
	
	
		
		 
};


int main()
{
	Degree d(150.78);
	Radian r(3.145);
	Radian h;
    Degree c ;
    c = r;
    h = d;
    
	
	
	
	
	return 0;
}

