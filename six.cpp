////////////////////////////////////discovering sorting technique for linked list/////////////////////////
#include<iostream>


#include<math.h>
#include<stdio.h>
using namespace std;
struct node
{
    int rollno;
    node *link;


};
node *root=NULL;
node *t=NULL;
void insert(int data)
{
    if(root==NULL)
    {
        cout<<"list is empty adding an element to it"<<endl;
        node* s=new node;
        s->link=NULL;
        s->rollno=data;
        root=s;
        t=root;
        cout<<"added succesfully"<<endl;
    }
      else
      {
          node *d=new node;
          d->link=NULL;
          d->rollno=data;
          t->link=d;
          t=t->link;


      }



    }
    void display()
    {
        node *t=root;
        while(t !=NULL)
        {

            cout<<t->rollno<<"-->";
            t=t->link;
        }


        }

void sortlinklist()
{
    int x;
    node *e=root;
    ////////////now to sort the list//////////////
    ///////////use the selection sort technique//////
int small;
node* y=NULL;
while(e !=NULL)
{
    small= e->rollno;
    y=e->link;
    while(y != NULL)
    {
        if((y->rollno)<small)
      {
          small=y->rollno;
          x=y->rollno;
          y->rollno=e->rollno;
          e->rollno=x;

      }
        y=y->link;
    }
      e=e->link;

    }


}






void swap(int& i,int& j)
{

    int k;
    k=i;
    i=j;
    j=k;
}




void bubblesort()
{
    node* i=root;
    node* j=NULL;
    node*k=NULL;
    while(i !=NULL)
    {
        j=i;
        while(j !=NULL)
        {
            k=j->link;
            if(j->rollno>k->rollno)
            {
            int x;
            x=j->rollno;
            j->rollno=k->rollno;
            k->rollno=x;

            }
            j=j->link;


        }
            i=i->link;

    }


}





int main()
{
    cout<<"enter zero to stop enter data to fill in the link list"<<endl;
    int h;
    cin>>h;
    while(h != 0)
    {
        insert(h);
        cout<<"another"<<endl;
        cin>>h;

    }
    cout<<"after the successful data entering the list looks like"<<endl;
    display();

    cout<<endl;
    cout<<"sorting the list"<<endl;
    bubblesort();
    cout<<"after sorting the list:::"<<endl;
    display();


return 0;
}

