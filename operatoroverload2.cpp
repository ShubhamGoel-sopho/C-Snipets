#include<iostream>

using namespace std;

class incdec
{
	private:
		int value;
		
	public:
		incdec()
		{
			value = 0;
		}
		incdec(int c)
		{
			value = c;
		}
		void read()
		{
			cout<<"enter value : ";
			cin>>value;
		}
		int get()
		{
		 	return value;
		}
		
		incdec operator ++()
		{
			value= value+1;
			return(incdec(value));
		}
		incdec operator --()
		{
			value= value-1;
			return(incdec(value));
		}
};
		
int main()
{
    incdec id1,id3;
    incdec id2(5);
    id1++;
    id2--;
    id3 = id1++;
    cout<<id1.get()<<endl;
    cout<<id2.get()<<endl;
    cout<<id3.get()<<endl;		
    return 0;	
}	
	

