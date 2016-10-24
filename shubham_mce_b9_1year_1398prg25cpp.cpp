/*Programming Problem

Each node of a queue contains the following information, in addition to a pointer field:
(i) EmpCode of employee
(ii) Ename of employee
Write a complete program in C++ to implement this linked list version of queue and also implement the following functions:
(a) add() - To add a node at the rear of queue which is allocated dynamically
(b) del()- To remove a node from the front of the queue and release the memory
(c) display() - To display the content of the queue at any stage.*/

#include<iostream>
#include<string.h>
using namespace std;

struct employee
{
   int empcode;
   char empname[30];
};
struct node
{
   employee emp;
   node *next;
};
class queue
{
   private:
       node *front,*rear;
       
       public:
        queue()
        {
               front = NULL;
               rear =  NULL;
               }
               void addqueue(employee e)
               {
                  node *t = new node;
                  if(t==NULL)
                  {
                     cout<<"memory is not available"<<endl;
                     }else
                     {
                      t->emp.empcode=e.empcode;
                      strcpy(t->emp.empname,e.empname );
                      if(rear==NULL)
                      {
                        rear=front=t;
                        }
                        else
                        {
                            rear->next=t;
                            rear = t;
                            }}}
               node *delqueue()
               {
                    node *t ;
                    t=front;
                    node *r=t;
                    if(front ==NULL)
                    {
                             cout<<"the queue is empty"<<endl;
                             return 0;
                             
                             }
                             else{
                                  front =front->next;
                                  delete t;
                                  return r;
                                  if(front =NULL)
                                  rear=NULL;
                                  }}
   void display()
{
     node *t;
     t = front;
     cout<<endl;
     while( t != NULL)
     {
            cout<<t->emp.empcode<<" , "<<t->emp.empname<<"----->";
            t = t->next;
     }
}


~queue()
{
        node *t;
        t =front;
        while(t !=NULL)
        {
                delete t;
                t=t->next;
                }
                }
                };
                
                
                int main()
                {
                    queue q;
                    
    employee e1;
    e1.empcode = 101;
    strcpy(e1.empname, "Ram");
    q.addqueue(e1);

    employee e2;
    e2.empcode = 102;
    strcpy(e2.empname, "Shyam");
    q.addqueue(e2);

    employee e3;
    e3.empcode = 103;
    strcpy(e3.empname, "Shyam Lal");
    q.addqueue(e3);

    q.display();
     q.delqueue();
     q.display();

system ("pause");
    return 0;
}

                    
                
                                       
                                  
                            
                         
                             
                            

       
