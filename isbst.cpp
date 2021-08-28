#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* left, *right;

    Node(int x)
    {
        data=x;
        left=right=NULL;
    }
};

Node* createnode(Node* root, int val)
{
    if(root==NULL)
        return new Node(val);

    if(root->data > val)
        root->left=createnode(root->left, val);
        else if(root->data < val)
            root->right=createnode(root->right, val);
    return root;
}
bool checkbst(Node* root, int min, int max)
{
    if(root==NULL)
    return true;

    if(root->data < min || root->data > max)
    return false;

    return checkbst(root->left, min , root->data) && checkbst(root->right, root->data,max);
}
bool isbst(Node* root)
{
    return checkbst(root, INT_MIN, INT_MAX);
}
int main()
{
    Node* root = NULL;

    int list[]={10,9,5,19,17,21};

    for(int i:list)
    createnode(root, i);

    bool b=false;
    b=isbst(root);
    
    if(b)
    cout<<" A BST"<<endl;
    else
    {
        cout<<"Not BST"<<endl;
    }

    return 0;
    
}