/**
  * illustrating link list manipulation
  * using the operator overloading
**/

#include <iostream>
using namespace std;

//creation of class link list
/*struct node
{
    int data;
    node *next;
}*/


class linklist
{
  private:
  int data;
  linklist *next;
  //linklist *last;
  
  node* operator +(int dat)
  {
      node *temp = new node;
      temp->data = dat;
      temp->next = NULL;
      return temp;
  }
  public:
  linklist()
  {
      
      data = 0;
      next = NULL;
      //last = NULL;
  }
  
  linklist *createnode()
  {
    linklist *temp =  new linklist;
    return temp;
  }
  
  linklist* operator +(int dat)
  {
    linklist *temp = this;
    temp->data = dat;
    return temp;
    
  }
   
   
   
  linklist* operator -(int dat)
  {
    linklist *temp = this;
    while(temp != NULL || temp->data != dat)
    {
      temp = temp->next; 
    }
    temp
  }
  
  void insert(linklist *node)
  {
      linklist *last = node;
      while(last->next != NULL)
      {
        last = last->next;
      }
      last->next = node;
      
  }
  
  
  
  
  
  
    
    
};







int main()
{
  int choice;
  linklist *root = NULL;
  linklist *node = NULL;
  while(true)
  {
    cout<<"enter 1 to insert the element in the link list : "<<endl;
    cout<<"enter 2 to delete the element in the link list :"<<endl;
    cout<<"0 to exit:"<<endl;
    std::cin >> choice;
    if(choice == 0)
    {
      break;
    }
    
    else
    {
      switch(choice)
      {
        case 1:
        {
          int data;
          cout<<"enter the value to insert in the link list:"<<endl;
          cin>>data;
          node = createnode()
          //now 
          node = node+data;
          if(root == NULL)
          {
            root = node;
          }
          else
          {
            root->insert(node);
          }
          break;
        }
        case 2:
        {
          int c;
          std::cout << "enter the value to be deleted from the list" << std::endl;
          std::cin >> c;
          
          root = root-c;
          
          
          break;
        }
        
        
        
        
        
        
      }
      
      
    }
    
    
  }
  
  
  
  
  return 0;
}