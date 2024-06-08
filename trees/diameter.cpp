//O(n) diameter
#include <iostream>
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
class p{
    public:
    int h;
    int d;
};
p fd(node*root)
{
    p x;
    if(root==NULL)
    {
        x.h=0;
        x.d=0;
        return x;
    }

    p l=fd(root->left);
    p r=fd(root->right);
    x.h=max(l.h,r.h)+1;
    int op1=l.d;
    int op2=r.d;
    int op3=l.h+r.h;
    x.d=max(op1,max(op2,op3));
    return x;
}
int main()
{
    node*root=buildtree();
    p a=fd(root);
    cout<<a.d;
    
}