#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* left, *right;

    Node(int x)
    {
        data=x;
        left=right=nullptr;
    }
};
void printdl(Node* &root)
{
    Node* head=root;

    while(head)
    {
        cout<<head->data<<" ";
        head=head->right;
    }
}
void convert(Node*curr,Node*&head,Node*&prev)
{
    if(curr==nullptr)
    return;

    convert(curr->left,head,prev);
    if(prev != nullptr)
    {
        prev->right=curr;
        curr->left=prev;
    }
    else
    {
        head=curr;
    }
    prev= curr;
    convert(curr->right,head,prev);
    
}
void convert(Node* root)
{
    Node* prev=nullptr;

    convert(root,root,prev);

    printdl(root);
}
 
int main()
{
    /* Construct below tree
              1
           /     \
          2       3
         / \     / \
        4   5   6   7
    */
 
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
 
    convert(root);
 
    return 0;
}
