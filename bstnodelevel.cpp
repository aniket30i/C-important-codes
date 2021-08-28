#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *left, *right, *next;

    Node(int x)
    {
        data=x;
        left=right=next=nullptr;
    }
};

void printnodes(Node* root)
{
    while(root)
    {
        cout<<root->data<<"->";
        root=root->next;
    }
    cout<<"null"<<endl;
}
Node* findnextnode(Node* root)
{
    if(root==nullptr || root->next==nullptr)
    return nullptr;

    if(root->next->left)
    return root->next->left;

    if(root->next->right)
    return root->next->right;

    return findnextnode(root->next);
}
void linknodes(Node* root)
{
    if(root==nullptr)
    return;

    linknodes(root->next);

    if(root->left)
    root->left->next=(root->right)?root->right : findnextnode(root);

    if(root->right)
    root->right->next=findnextnode(root);

    linknodes(root->left);
    linknodes(root->right);
}
int main()
{
    /* Construct below Tree
           1
         /   \
        2     3
       / \     \
      4   5     6
       \       /
        7     8
    */
 
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);
    root->left->left->right = new Node(7);
    root->right->right->left = new Node(8);
 
    // link nodes at the same level
    linknodes(root);
 
    // print the nodes
    Node* node = root;
    while (node)
    {
        // print current level
        printnodes(node);
 
        // find leftmost node of the next level
        if (node->left)
            node = node->left;
        else if (node->right)
            node = node->right;
        else
            node = findnextnode(node);
    }
 
    return 0;
}