#include <iostream>
#include<math.h>
using namespace std;

/////////////practising the operator overloading////////////////
/////////////overloading the stream operators/////////
class complex
{
	private:
	
		float real;
		float imaginary;
	
	public:
	
		complex()
		{
			real = 0.0;
			imaginary = 0.0;
		}
		complex(float r,float img)
		{
			real = r;
			imaginary = img;
		}
		
		complex operator+=(complex &c1)
		{
			real = real+c1.real;
			imaginary = imaginary+c1.imaginary;
		}
		complex operator-=(complex &c1)
		{
			real = real-c1.real;
			imaginary = imaginary-c1.imaginary;
		} 		
		
		friend istream & operator>>(istream &in,complex &c);
		friend ostream & operator<<(ostream &out,complex &c);
		
    
		
	
	
	
};

istream & operator>>(istream &in,complex &c)
{
	cout<<"Enter the real part of the object"<<endl;
	in>>c.real;
	cout<<"Enter the imaginary part"<<endl;
	in>>c.imaginary;
	
	return in;
}

ostream & operator<<(ostream &out,complex &c)
{
	out<<"("<<c.real<<" ";
	if(c.imaginary < 0)
	{
		out<<"- i"<<fabs(c.imaginary)<<")"<<endl;
	}
	else
	out<<"+ i"<<c.imaginary<<")"<<endl;
	
	
	return out;
}



int main()
{
	cout<<"WELCOME :>:>:>"<<endl;
	complex c1,c2;
	cout<<"now enter the values"<<endl;
	cin>>c1;
	cout<<endl;
	cin>>c2;
	cout<<"the both objects looks like :"<<endl;
	cout<<c1<<endl;
	cout<<c2<<endl;
	c1+=c2;//c1 = c1+c2;
	cout<<"after adding the both objects :"<<endl;
	cout<<c1;
	
	return 0;
	
	
}
