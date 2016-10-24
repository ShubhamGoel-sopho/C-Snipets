#include<iostream>
//#include<string.h>
#include<string>
using namespace std;
/*class employee
{
    private:
    char *name;
    char *address;
    public:
    employee()
    {
        name = NULL;
        address = NULL;
    }
    void setname(char const *s)  ;
    void setaddress(char const *s1)  ;
    char const *givename()  const;
    char const *giveaddress() const;
    ~employee()
    {
        cout<< "going out of the bad world"<<endl;
        delete name;
        delete address;


    }
};
    void printempdetails(employee p)
    {

        cout << "Employee Details are :" << endl;
        cout << "Employee Name is :" << p.givename()<<endl;
        cout << "Employee Address is : " <<p.giveaddress()<<endl;
    }
    void employee ::setname(char const *s)
    {
        if(s != NULL)
        {
            if(name)
            delete name;
            name = new char[strlen(s)+1];
            strcpy(name,s);
        }
    }

    void employee ::setaddress(char const *s1)
    {
        if(s1 != NULL)
        {
            if(address)
            delete address;
            address= new char[strlen(s1)+1];
            strcpy(address,s1);
        }
    }

   char const *employee ::givename()    const
   {
       return name;
   }
   char const *employee ::giveaddress()    const
   {
       return address;
   }


int main()
{
    employee e1,e2;
    e1.setname("shubham goel");
    e2.setname("shivani goel");
    e1.setaddress("nathupura");
    e2.setaddress("amrit vihar");
    printempdetails(e1);
    printempdetails(e2);
    e1.~employee();
    e2.~employee();



	return 0;

}*/

class employee
{
    private:
    string name;
    string address;
    public:
    employee()
    {
        name = "";
        address = "";
    }
    void setname(string s)  ;
    void setaddress(string s1)  ;
    string  givename()  const;
    string giveaddress() const;
    ~employee()
    {
        cout<< "going out of the bad world"<<endl;



    }
};
    void printempdetails(employee p)
    {

        cout << "Employee Details are :" << endl;
        cout << "Employee Name is :" << p.givename()<<endl;
        cout << "Employee Address is : " <<p.giveaddress()<<endl;
    }
    void employee ::setname(string s)
    {
        if(s != "")
        {


          name=s;
        }
    }

    void employee ::setaddress(string s1)
    {
        if(s1 != "")
        {


            address = s1;
        }
    }

string employee ::givename()    const
   {
       return name;
   }
   string employee ::giveaddress()    const
   {
       return address;
   }


int main()
{
    employee e1,e2;
    e1.setname("shubham goel");
    e2.setname("shivani goel");
    e1.setaddress("nathupura");
    e2.setaddress("amrit vihar");
    printempdetails(e1);
    printempdetails(e2);
    e1.~employee();
    e2.~employee();



	return 0;

}
