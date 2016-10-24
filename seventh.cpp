 //////////////////////////////////binary search tree without recursion inserting element using only iteration/////////////////////


#include<iostream>
#include<stdio.h>
#include<iomanip>
#define null NULL
using namespace std;

struct btree
{
    char name[20];
    int roll;
    float percent;
    btree *left;
    btree *right;
};
btree* findmin(btree* fo);
btree* root= NULL;
void insert()
{
    btree* m=root;
    btree *c=new btree;
    c->left=c->right=NULL;
    fflush(stdin);
    cout<<"ENTER THE NAME OF EMPLOYEE"<<endl;
    gets(c->name);
    fflush(stdin);
    cout<<"enter the roll no"<<endl;
    cin>>c->roll;
    cout<<"enter the percentage work done by him"<<endl;
    cin>>c->percent;
    if(root == null)
    {
        root=c;

    }
    else
    {
        btree *cat;
        while(m != null)
        {
            if (c->roll<m->roll)
            {
                cat=m;
                m=m->left;
            }
            else if(c->roll>m->roll)
            {
                cat=m;
                m=m->right;
            }
        }
    if(cat->roll>c->roll)
 {
     cat->left=c;
 }
else{
cat->right=c;
}

    }
}

btree* deletenode(btree* root,int data)
{
    if(root==null)
    return null;
    else if(root->roll>data)
    {
        root->left=deletenode(root->left,data);
    }
    else if(root->roll<data)
    {
        root->right=deletenode(root->right,data);
    }
    else
    {
        if(root->left==null&&root->right==null)
        {
            btree* f=root;
            delete f;
            return null;

        }
       else if(root->left==null)
       {
           btree* g=root;
           btree* h=root->right;
           delete g;
           return h;


       }
       else if(root->right==null)
       {
           btree* g=root;
           btree* h=root->left;
           delete g;
           return h;
           }
        else
        {
            btree* h=findmin(root->right);
            root->roll=h->roll;
            root->right=deletenode(h,data);
            return root;


        }


    }

}

void displaytree(btree *roo)
{
    if(roo !=NULL)
    {


        displaytree(roo->left);
        printf("%d",roo->roll);
        cout<<endl;
        displaytree(roo->right);
    }
}


btree* findmin(btree* fo)
{

  if(fo==null)
    {
        return fo;
    }
    else
    {
   return   findmin(fo->left);
    }

}
int main()
{
    cout<<"creating the binary tree for you"<<endl;
    insert();
    insert();
    insert();
insert();
insert();
    cout<<"displaying the list"<<endl;
    btree* f=root;
    displaytree(f);



    return 0;

}




