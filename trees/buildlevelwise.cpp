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
node* buildlevelwise()
{
    int d;
    cout<<"enter data of root";
    cin>>d;
    node* root=new node(d);
    queue<node*> q;
    q.push(root);
    while (!q.empty())
    {
        node* x=q.front();
        q.pop();
        int lc,rc;
        cout<<"enter left and write child of  "<<x->data;
        cin>>lc>>rc;
        if(lc!=-1)
        {                                //we hve to attach nodes in left and right subtree of root node so taken node* datatype of queue
            x->left=new node(lc);
            q.push(x->left);
        }
        
        if(rc!=-1)
        {
            x->right=new node(rc);
            q.push(x->right);

        }
        
    }
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
    node* root=buildlevelwise();
    printlevelwise(root);
}