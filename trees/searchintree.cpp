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
bool search(node* root,int key)
{
    if(root==NULL)
    {
        return false;
    }
    if(root->data==key||search(root->left,key)||search(root->right,key))
    {
        return true;
    }
    return false;
}
int main()
{
    node* root=buildtree();
    int key;
    cout<<"enter key ";
    cin>>key;
    cout<<search(root,key);
}