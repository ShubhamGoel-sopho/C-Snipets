
#include<iostream.h>


 using namespace std;
 struct node
 {
        int ele;
        node *next;
            };  
class stack
{
    private:
            node *top;
            public:
                   stack()
                   {
                          top == NULL;
                          }
                   void push(int element);
                   int pop();
                   void display();
                  ~stack();
                  };
                  void stack::push(int element) 
                  {
                       node *t=new node;
                       if(t==NULL)
                       {
                                  cout<<"memory is full"<<endl;
                                  
                                  }
                                  else
                                  t->ele=element;
                                  t->next= top;
                                  top=t;
                                  }
                                  int stack::pop()
                                  {
                                      if(top==NULL)
                                      {
                                                   cout<<"the stack is empty"<<endl;
                                                   return 0;
                                                   }
                                                   else
                                                  { node *t=top;
                                                   int r=top->ele;
                                      
                                                   
                                           top =  top->next;
                                           delete t;
                                           return r;
                                          } }
                                           void stack::display()
                                           {
                                                node *t;
                                                t=top;
                                                while(top !=NULL)
                                                {cout<<t->ele<<endl;
                                                          top=top->next;
                                                          
                                                          }}
                                           stack::~stack()
                                           {
                                                          node *t;
                                                          while(top !=NULL)
                                                          {t=top;
                                                                    top=top->next;
                                                                    delete t;
                                                                    
                                                                    }}
                                                                    int main()
                                                                    {
                                                                        stack s1;
                                                                        s1.push(5);
                                                                        s1.push(7);
                                                                        s1.push(8);
                                                                        s1.display()
                                                                        
                                                                   
                                                                        
                                                                        system ("pause");
                                                                        return 0;
                                                                        }
                                  
                                  
                   
              
