
///////////////////////////////////double link list and their implementation/////////////to sort link list uisng insertion sort//////////////
#include<iostream>

#include<iomanip>
#include<stdio.h>

using namespace std;
struct dobnode
{
    int rollno;
    char batch;
    char name[50];
    dobnode *front;
    dobnode *end;
};
class doublelink
{private:
dobnode *root;
public:
doublelink()
{
    root=NULL;

}
void readdetails(dobnode* s)
{

fflush(stdin);
  cout<<"ENTER THE STUDENT'S NAME"<<endl;
    gets(s->name);
    fflush(stdin);
    cout<<"ENTER THE BATCH CHARACTER A-J"<<endl;
   cin.get(s->batch);
   fflush(stdin);
   cout<<"ENTER ROLL NO:"<<endl;
   cin>>s->rollno;
   }

void showdetails(dobnode* r)  const
{
    fflush(stdin);
     cout<<" THE STUDENT'S NAME: ";
    puts(r->name);
    cout<<endl;
    cout<<"THE BATCH CHARACTER A-J :";
   cout.put(r->batch);
   cout<<endl;

   cout<<"ROLL NO:  ";
   cout<<r->rollno<<endl;
   }

void createnode()
{
    if(root==NULL)
    {
        dobnode *sat;
        sat= new dobnode;
        sat->front=NULL;
        sat->end=NULL;
        readdetails(sat);

        root=sat;

    }
    else
    {
        dobnode *satm=root;
        dobnode *sata;
        sata=new dobnode;
        sata->front=NULL;
        sata->end=NULL;
        readdetails(sata);
        dobnode * sat1=NULL;
        while(satm !=NULL)
        {sat1=satm;
            satm=satm->front;
        }
        sat1->front=sata;
        sata->end=sat1;

    }


        }


        dobnode* retroot()
        {
            return root;
        }
void displaylist()
{
    dobnode *r=root;
    while(r!=NULL)
    {
        showdetails(r);
        r=r->front;
    }






}
void  insertionsort()
{
    dobnode* h=root;
    h=h->front;
    dobnode* backmove=NULL;
    dobnode* seprate=NULL;
    int small;
    while(h !=NULL)
    {
        small=h->rollno;
        backmove = h->end;
        seprate=h;
        while((backmove !=NULL )&&(backmove->rollno>small) )
        {
            seprate->rollno=backmove->rollno;
            backmove=backmove->end;
            seprate=seprate->end;

        }
      seprate->rollno=small;
      h=h->front;





    }


}


~doublelink()
{
    dobnode* del=root;
    while(del !=NULL)
    {

        delete del;
        del=del->front;

    }


}






};


int main()
{
    doublelink object1;
    cout<<"enter how structures you want to create in the system"<<endl;
    int k;
    cin>>k;
    cout<<endl;
    cout<<"now enter the information of each record in the system"<<endl;
    for(int i=0;i<k;i++)
    {

        cout<<"student : "<<i+1<<endl;
         object1.createnode();

}

cout<<endl;
cout<<"after the successful enter of the data by you"<<endl;
object1.displaylist();
cout<<endl;
cout<<"now to sort the list"<<endl;
object1.insertionsort();
object1.displaylist();



    return 0;
}


