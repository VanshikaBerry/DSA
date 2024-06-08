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
//int pre[]={8,10,1,6,4,7,3,14,13};
//int ino[]={1,10,4,6,7,8,3,13,14};
int pre[]={8,8,4,6,3,1,7,2,9,5};
int ino[]={4,8,3,6,1,8,2,7,5,9};
int i=0;
node* preinordercreate(int s,int e)
{
    if(s>e)
    {
        return NULL;
    }
    int d=pre[i];
    i++;
    int k;
    for(int j=s;j<=e;j++)
    {
        if(ino[j]==d)
        {
             k=j;
            break;
        }
    }
    node* root=new node(d);
    root->left=preinordercreate(s,k-1);
    root->right=preinordercreate(k+1,e);
    return root;

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
    int n=sizeof(pre)/sizeof(int);
    node* root=preinordercreate(0,n-1);
    printlevelwise(root);

}