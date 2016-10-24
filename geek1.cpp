#include<iostream>
#include<set>
using namespace std;
int main()
{
    int x;
    set<int> mytree;
    cout<<"enter the elemnts to insert in the tree"<<endl;
    cin>>x;
    mytree.insert(x);
    while(x !=-1)
    {
        cout<<"insert more -1 to stop "<<endl;
        cin>>x;
        mytree.insert(x);
        }
    cout<<"the tree looks like"<<endl;
    set<int>:: iterator myptr;
    myptr=mytree.find(30);
 //   myptr=mytree.begin();
    for(myptr;myptr != mytree.begin();myptr--)
    {
        cout<<*myptr<<endl;

}
myptr=mytree.find(30);
 for(myptr;myptr != mytree.end();myptr++)
    {
        cout<<*myptr<<endl;

}


return 0;




}
