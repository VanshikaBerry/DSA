#include <iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};
node* buildtree()
{
   int d;
   cin>>d;
   if(d==-1)
   {
    return NULL;
   }
   node* root=new node(d);
   root->left=buildtree();
   root->right=buildtree();
   return root;
}
void preorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int height(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return max(height(root->left),height(root->right))+1;

}
int sumofnodes(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return root->data+sumofnodes(root->left)+sumofnodes(root->right);
}
int countofnodes(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return 1+countofnodes(root->left)+countofnodes(root->right);
}
int diameter(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int  op1=diameter(root->left);
    int op2=diameter(root->right);
    int op3=height(root->left)+height(root->right);
    return max(op3,max(op1,op2));
}
void mirroroftree(node* root)
{
    if (root==NULL)
    {
        return;
    }
    swap(root->left,root->right);
    mirroroftree(root->left);
    mirroroftree(root->right);
}
void printlevelwise(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
            node*x=q.front();
            q.pop();
            if(x==NULL)
            {
                 cout<<endl;
                 if(!q.empty())
                 {
                    q.push(NULL);
                 }
            }
            else
            {
                cout<<x->data<<" ";
                if(x->left!=NULL)
                {
                    q.push(x->left);
                }
                if(x->right!=NULL)
                {
                    q.push(x->right);
                }
            }

    }
   
}
int main()
{
    node* root= buildtree();
    //printlevelwise(root);
    preorder(root);
    cout<<endl;
    inorder(root);
    //cout<<endl;
    //postorder(root);
    //cout<<height(root)<<endl;
    //cout<<sumofnodes(root)<<endl;
    //cout<<countofnodes(root)<<endl;
    //cout<<diameter(root);
   // mirroroftree(root);

} 