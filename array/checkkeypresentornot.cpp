#include<iostream>
using namespace std;
bool checkkeypresent(int arr[100][100],int r,int c,int key)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]==key)
            {
                cout<<key<<" is present at index "<<i<<","<<j;
                return true;
            }
        }
    }
    return false;
     
     
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
    if(checkkeypresent(arr,r,c,key)==false)
    {
        cout<<"key is not present in array";

    }
}