#include<iostream>
#include <bits/stdc++.h> 
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
int findheight(Node *root)
{
    int height=0;
    if(root)
    {
        height=max(findheight(root->left),findheight(root->right));
        height+=1;
    }
    return height;
}
bool isbalanced(Node* root)
{
    if(root==nullptr)
    return true;
    
    int left,right;

    left=findheight(root->left);
    right=findheight(root->right);

    if(abs(left-right)<=1 && isbalanced(root->left) && isbalanced(root->right))
        return true;
    return false;
}
int main() 
{ 
    int height = 0; 
  
    /* Constructed binary tree is  
            1  
            / \  
            2 3  
            / \ /  
            4 5 6  
            /  
            7  
    */
    Node* root = new Node(1); 
    root->left = new Node(2); 
    root->right = new Node(3); 
    root->left->left = new Node(4); 
    root->left->right = new Node(5); 
    root->right->left = new Node(6); 
    root->left->left->left = new Node(7); 
  
    if (isbalanced(root))
        cout << "Tree is balanced"; 
    else
        cout << "Tree is not balanced"; 
  
    return 0; 
} 
  
  
/* Try more Inputs
case1:
root = Node(2) 
root.left = Node(3) 
root.right = Node(4) 
root.left.left = Node(5) 
root.left.right = Node(6) 
root.left.left.left = Node(9)
actual = isTreeBalanced(root)
expected = True

case2:
root = Node(2) 
root.left = Node(3) 
root.right = Node(4) 
root.left.left = Node(5) 
root.left.left.left = Node(6) 
root.left.left.left.left = Node(9)
actual = isTreeBalanced(root)
expected = False

*/