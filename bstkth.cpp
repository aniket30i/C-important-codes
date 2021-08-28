#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;

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

    if(val < root->data)
        root->left=createnode(root->left,val);
        else if(val > root->data)
            root->right=createnode(root->right,val);
    return root;
}
Node* kthsmallest(Node* root, int& k)
{
    if(root==NULL)
    {
        return NULL;
    }

    Node* out=kthsmallest(root->left, k);

    if(out != NULL)
    return out;

    k--;
    if(k==0)
    return root;

    return kthsmallest(root->right, k);
}

void printkthsmallest(Node* root, int k)
{
    int count=0;

    Node* res=kthsmallest(root, k);

    if(res==NULL)
        cout<<"Less than K elements present"<<endl;

    else
        cout<<"The Kth Smallest element is :"<<res->data<<endl;
}
int main()
{
    Node* root=NULL;

    int list[]={22,20,28,10,12,14,16};

    for(int i : list)
        root= createnode(root,i);
    int k;
    cout<<"Enter which number smallest you want to find? "<<endl;
    cin>>k;

    printkthsmallest(root,k);
    return 0;
}