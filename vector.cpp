#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
    vector<string> myvec;
    int num = 1;
    
    char str[50];
    while(num==1)
    {
              cout<<"enter the string"<<endl;
              myvec.push_back(gets(str));
              cin>>num;
              }
              
              
              for(unsigned i =0;i<myvec.size();i++)
              {
                           myvec.at(i);
                           cout<<endl;
                           }
                           cout<<"now the sorted list"<<endl;
                           sort(myvec.begin(),myvec.end());
                           for(unsigned i =0;i<myvec.size();i++)
              {
                           myvec[i];
                           cout<<endl;
                           }
                           
                           
                           
                           system ("pause");
                           return 0;
                           }  
