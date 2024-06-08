#include <iostream>
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
        root=insertinbst(root,d);
        cin>>d;
    }
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
bool searchinbst(node* root,int key)
{
    if (root==NULL)
    {
        return false;
    }
    if(root->data==key)
    {
        return true;
    }
    else if(key<root->data)
    {
        return searchinbst(root->left,key);
    }
    else{
        return searchinbst(root->right,key);
    }

}
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
void printinrangek1k2asc(int k1,int k2,node* root)
{
    if(root==NULL)
    {
        return;
    }
    printinrangek1k2asc(k1,k2,root->left);
     if(root->data>=k1 && root->data<=k2)
     {
        cout<<root->data<<" ";
     }
     printinrangek1k2asc(k1,k2,root->right);
}
void printinrangek1k2desc(int k1,int k2,node* root)
{
    if(root==NULL)
    {
        return;
    }
    printinrangek1k2desc(k1,k2,root->right);
     if(root->data>=k1 && root->data<=k2)
     {
        cout<<root->data<<" ";
     }
     printinrangek1k2desc(k1,k2,root->left);
}
bool checkifbst(node* root,int min=INT_MIN,int max=INT_MAX)
{
    if(root==NULL)
    {
        return true;
    }
    if(root->data>=min && root->data<=max && checkifbst(root->left,min,root->data)&& checkifbst(root->right,root->data+1,max))
    {
        return true;
    }
    return false;
}
int main()
{
    //node* root=buildbst();
    node* root=buildlevelwise();
    printlevelwise(root);
    //int key;
    //cout<<"enter key ";
    //cin>>key;
    //cout<<searchinbst(root,key);
    /*int k1,k2;
    cin>>k1>>k2;
    printinrangek1k2desc(k1,k2,root);*/
    cout<<checkifbst(root);
}
