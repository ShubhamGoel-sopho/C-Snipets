#include<iostream>
using namespace std;

class complexadd {
               private:
                   int real;
                   float img;
               public:
               complexadd()
               {
                   real = 0;
                   img = 0.0;
               }
               complexadd(int x, float y)
               {
                   real = x;
                   img = y;
               }
                    void addtwocomp(complexadd *p, complexadd *q);
                    void subtwocomp(complexadd *p, complexadd *q);
                     int getreal() const;
                    float getimaginary() const;
                    friend void showobject(complexadd const &s);

};
void complexadd ::addtwocomp(complexadd *p, complexadd *q)
{
    real = p->real + q->real;
    img =  p->img + q->img;
}

void complexadd ::subtwocomp(complexadd *p, complexadd *q)
{
    real = p->real - q->real;
    img =  p->img - q->img;
}

int complexadd ::getreal()  const
{
    return real;
}

float complexadd ::getimaginary() const
{

    return  img;
}

void showobject(complexadd const &s)
{
    cout<<"finally complex no is : "<<endl;
    cout<<s.real ;
    if(s.img > 0 )
    cout<<" "<<"+"<<"i"<<s.img<<endl;
    else
    cout<<" i"<<s.img<<endl;

}

int main()
{
    complexadd c1(5,8.95);

    complexadd c2(8,-7.74);
    showobject(c1);
    showobject(c2);
    complexadd c3;
    c3.addtwocomp(&c1,&c2);
    cout<<"after call to add complex btw c1 and c2"<<endl;
    showobject(c3);
    complexadd c4;
    c4.subtwocomp(&c1,&c2);
    cout<<"after call to sub complex btw c1 and c2"<<endl;
    showobject(c4);
    return 0;
}


