#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
#define HASH_MAX 23
double const KNUTHVAL = (sqrt(5)-1)/2;

int stringhash(char *somevalue)
{
	int length = strlen(somevalue);
	//using horner rule for creating hash ///
	///here i choose y = 33 as suggested////
	int y =33;
	int long long sum = 0;
	for(int i=0;i<length;i++)
	{
		if(i == 0)
		{
			sum +=int(somevalue[i]);
		}
		else
		{
			sum +=( pow(y,i)* int(somevalue[i]));
			
		}
		
		
	} 
	
	return (sum % HASH_MAX);
	
	
}

int inthash(int key)
{
	/////according to knuth statement//////
	
     
	
	return(floor((HASH_MAX)*fmod((key*KNUTHVAL),1))); 
	
	
	
	
	
}

int inthash2(int key)
{
	
	////multiply,add,divide (MAD)////////////
	
	int a=41;
	int b=79;
	
	
	return ((abs(a*key+b)% HASH_MAX));
	
}


int doubhash(int key)
{
	
	
return (abs(7-(key%HASH_MAX)));	
	
}





long long convertDecimalToBinary(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1;

    while (n!=0)
    {
        remainder = n%2;
        printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n", step++, n, remainder, n/2);
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}






int main()
{
//	char str[25];
	/*do
	{
	
	cout<<"Give the name:"<<endl;
	cin.getline(str,25);
	if(strcmp(str,"0")==0)
	{
		break;
	}
	int hashval = stringhash(str);
	cout<<"the computed hash value is : "<<hashval<<endl;
}while(true);


int k;
do{
	
	cout<<"Give the key : "<<endl;
	cin>>k;
	if(k >10000)
	{
		break;
	}
	int map = inthash(k);
	cout<<"Map value is : "<<map<<endl;
	
	
}while(true);



*/

int k;
do{
	
	cout<<"Give the key : "<<endl;
	cin>>k;
	if(k >10000)
	{
		break;
	}
	int map = inthash2(k);
	cout<<"Map value is : "<<map<<endl;
	
	
}while(true);







	
	return 0;
}
