#include<iostream>
#include <string>
#include <bitset>
using namespace std;
int main()
{
	bitset<16> foo(string("111111011"));
	

	cout<<foo<<endl;
	if(foo.all())
	{
		cout<<"all are set"<<endl;
	}
	else if(foo.any())
	{
		cout<<"some are set"<<endl;
	}
 else{

 cout<<"none are set"<<endl;
	
}
	for(int i=0;i<foo.size();i++)
	{
	    cout<<foo.test(i)<<endl;
	}
	
	
	
	
	/*for(int i=0;i<foo.size();i++)
	{
		cout<<foo[i];
	}
	
	cout<<endl;
	cout<<foo;
		cout<<endl;
	foo[5]=0;
	cout<<foo<<endl;
	foo.reset(4);
	cout<<foo<<endl;
	foo.reset();
	cout<<foo<<endl;
	foo.set(5);
	cout<<foo<<endl;*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
