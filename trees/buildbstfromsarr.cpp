#include<iostream>
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
int arr[]={1,2,3,4,5,6,7,8,9};
node* buildbstfromsarr(int s,int e)
{
    if(s>e)
    {
        return NULL;
    }
    int mid=(s+e)/2;
    node* root=new node(arr[mid]);
    root->left=buildbstfromsarr(s,mid-1);
    root->right=buildbstfromsarr(mid+1,e);
    return root;
}
void printlevelwise(node* root)
{
    queue <node*> q;
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
   int n;
   n=sizeof(arr)/sizeof(int);
   node* root= buildbstfromsarr(0,n-1);
   printlevelwise(root);
}