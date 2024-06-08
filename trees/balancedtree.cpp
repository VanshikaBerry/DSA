#include<iostream>
using namespace std;
#include<queue>
#include<climits>
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
node* insertinbst(node* root,int d)
{
    if(root==NULL)
    {
        root=new node(d);
        return root;
    }
    else if(d<=root->data)
    {
        root->left=insertinbst(root->left,d);
        return root;
    }
    else{
        root->right=insertinbst(root->right,d);
        return root;
    }
}
node* buildbst()
{
    int d;
    cin>>d;
    node* root=NULL;
    while(d!=-1)
    {
        root=insertinbst(root,d);                            // 8
                                                            //3     10
                                                           //2  4         12
                                                          //1
        cin>>d;
    }
    return root;
}
class p
{
    public:
    int h;
    bool isbal;
};
p isbalanced(node* root)
{
    p x;
    if(root==NULL)
    {
        x.h=0;
        x.isbal=true;
        return x;
    }
    p l=isbalanced(root->left);
    p r=isbalanced(root->right);
    x.h=max(l.h,r.h)+1;
    if(l.isbal==true && r.isbal==true && abs(l.h-r.h)<=1)
    {
        x.isbal=true;
    }
    else{
         x.isbal=false;

    }
    return x;

}
int main()
{
    node* root=buildbst();
    p a=isbalanced(root);
    cout<<a.isbal<<" ";
    cout<<a.h;

    
}