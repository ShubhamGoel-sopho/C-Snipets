//////oop practise dynamic object initialization and clean up/////////////
#include <iostream>
#include <string>
#include<stdlib.h>
#include<stdio.h>
#include <unistd.h>

using  namespace std;
/////////////class in which ponters exist and dynamically resizable/////////
class  vector{
    private:
    int *vec_point;
    int s;

    public:

    vector(int size)
    {
        s = size;
        vec_point = new int[s];
        usleep(500000000);
        cout<<"dynamic vector has been created"<<endl;
    }
    vector(vector &obj)
    {
        vec_point=new int[obj.s];
        s = obj.s;
        cout<<"copy constructor on work"<<endl;
    }
    void read_values()
    {
        cout<<"enter the values of your object : "<<endl;

        for(int i = 0; i< s;i++)
        {
            cin>>vec_point[i];
        }
    }

  void  dynamic_resize(int value);
  void print_values() const
  {
      cout<<"THE DYNAMIC VECTOR LOOKS LIKE"<<endl;
      usleep(50000000);
      for(int k = 0 ;k<s;k++)
      {
        cout<<vec_point[k];
        cout<<"  ";
      }
      cout<<endl;
  }

    ~vector()
    {
        delete vec_point;
        vec_point=NULL;
    }


};
void vector:: dynamic_resize(int value)
    {
        cout<<"RESIZING YOUR VECTOR"<<endl;
                    usleep(500000000);

        int *p = new int[value];
        if(p)
        {
        for(int i = 0; i< s;i++)
        {
           p[i] =vec_point[i];

        }
        int *q = vec_point;
        vec_point = p;
        delete q;
        cout<<"CONGRATS RISIZED"<<endl;
                    usleep(5000000);

        cout<<"now enter the value in the resized vector"<<endl;
        for(int k=s;k<value;k++)
        {
            cin>>vec_point[k];
        }
        cout<<endl;
        s = value;


        }
    }

    int main()
    {
        vector myvector(10);
        myvector.read_values();
        myvector.print_values();
        myvector.dynamic_resize(20);
        myvector.print_values();

        vector myanothervector(myvector);
        myanothervector.read_values();
        myanothervector.print_values();






        return 0 ;
    }
