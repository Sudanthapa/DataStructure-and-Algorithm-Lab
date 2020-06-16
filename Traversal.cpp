#include<iostream>
using namespace std;

struct node
{
     int data;
     struct node *left;
     struct node *right;
};

struct node *newNode(int data)
{
     struct node *node = new(struct node);
     node->data = data;
     node->left = NULL;
     node->right = NULL;

     return(node);
}


void Postorder(struct node* node)
{
     if (node == NULL)
        return;
		Postorder(node->left);
		Postorder(node->right);
		cout<<node->data;
}
void Inorder(struct node* node)
{
     if (node == NULL)
          return;
	Inorder(node->left);
	cout<<node->data;
	Inorder(node->right);
}


void Preorder(struct node* node)
{
     if (node == NULL)
          return;
	cout<<node->data;
     Preorder(node->left);
     Preorder(node->right);
}

int main()
{
    struct node *root  = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
	cout<<"\nPreorder traversal of binary tree is \n";
    Preorder(root);
	cout<<"\nInorder traversal of binary tree is \n";
 	Inorder(root);
	cout<<"\nPostorder traversal of binary tree is \n";
	Postorder(root);
	return 0;
}
