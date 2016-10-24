#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int comp(int i ,int j)
{
    if(i>j)
    return i;
    else
    return j;
}
int main()
{
    
    
    int num;
    vector<int> my;
    cout<<"enter -1 to stop"<<endl;
    cin>>num;
    while(num !=-1)
    {
              my.push_back(num);
              cin>>num;
              }
    for(unsigned int i=0;i<my.size();i++)
    {cout<<my[i]<<"->";
}

cout<<endl;
stable_sort(my.begin(),my.end(),comp)   ;       
for(unsigned int i=0;i<my.size();i++)
    {cout<<my[i]<<"->";
}

              
              
              
              
              
              
              
              system ("pause");
              return 0 ;
              }
