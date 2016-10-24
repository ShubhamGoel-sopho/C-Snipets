#include<iostream>
#include<string.h>
#include<algorithm>
#include<list>
#include<vector>
using namespace std;
bool compare(string a,string b)
{
     if(int(a[0])>int(b[0]))
     return 0;
     else 
     return 1;
     
     
     }
     
     
int main()
{
   /* string s[5];
    for(int i=0;i<5;i++)
    {
            cout<<"enter the string =="<<i+1<<endl;
            cin>>s[i];
            cout<<endl;
            }
            
            sort(s,s+5,compare);
            for(int y=0;y<5;y++)
            {
                    cout<<s[y]<<endl;
                    } */
              vector<string> s;
              int d=1;
              int num=1;
              string hu;
              while(num)
              {
                      cout<<"enter the name "<<d<<"==enter '-1' to stop"<<endl;
                      
                      cin>>hu;
                      d++; 
                      s.push_back(hu);
                     cout<<endl;cout<<"enter choice"<<endl; cin>>num;
                     
    
                      }
                      sort(s.begin(),s.end(),compare);
                      
                      
                   for(unsigned int y=0;y<s.size();y++)
            {
                    cout<<s[y]<<endl;
                    }    
                           
            
            
            system ("pause");
            return 0 ;
            }
