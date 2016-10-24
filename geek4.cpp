#include<iostream>
#include<queue>
using namespace std;

struct Node {
	int data;
	Node *left;
	Node *right;
};
//global array;
int a[6];
int i = 0;
// Function to print Nodes in a binary tree in Level order
/*void LevelOrder(Node *root) {
	if(root == NULL) return;
	queue<Node*> Q;
	Q.push(root);
	//while there is at least one discovered node
	while(!Q.empty()) {
		Node* current = Q.front();
		Q.pop(); // removing the element at front
		cout<<current->data<<" ";
		if(current->left != NULL) Q.push(current->left);
		if(current->right != NULL) Q.push(current->right);
	}
}*/
bool chkarraysorted()
{
    bool flag = false;
    for(int k=0;k<6;k++)
    {
        if(a[k+1]<a[k])
        flag= true;
        else
        flag=false;

    }

 return flag;

}
void Inordertraversal(Node *root)
{
    if(root == NULL)
    return ;
    else
    Inordertraversal(root->left);
   a[i] = root->data;
   i++;
  //  cout<<root->data<<endl;
   Inordertraversal(root->right);
    }
// Function to Insert Node in a Binary Search Tree
Node* Insert(Node *root,int data) {
	if(root == NULL) {
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data) root->left = Insert(root->left,data);
	else root->right = Insert(root->right,data);
	return root;
}

int main() {

	Node* root = NULL;
	root = Insert(root,10); root = Insert(root,6);
	root = Insert(root,14); root = Insert(root,13);
	root = Insert(root,8); root = Insert(root,15);
cout<<endl;
Inordertraversal(root);
for(int i=0;i<6;i++)
{
    cout<<"a["<<i<<"]"<<a[i]<<endl;
}
bool flag=chkarraysorted();
if(flag == true)
{
    cout<<"this is perfect binary search tree"<<endl;
}
if(flag == false)
{


cout << "not a bst"<<endl;
}
return 0 ;

}
