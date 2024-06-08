#include<iostream>
using namespace std;
void alloccurrences(int arr[100][100],int r,int c,int key)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]==key)
            {
                cout<<key<<" is present at index "<<i<<","<<j<<endl;
            }
        }
    }
     
}

int main(){
    int arr[100][100];
    int r,c;
    cout<<"enter number of rows and columns ";
    cin>>r>>c;
   
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    int key;
    cout<<"enter key";
    cin>>key;
    alloccurrences(arr,r,c,key);
}