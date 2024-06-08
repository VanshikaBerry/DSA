//starircase search
//row wise and column wise sorted
//number of iterations less than linear search
//linearsearch: we start from the beginning and keep on searching each element until we find the key
#include<iostream>
using namespace std;
bool matrixsearch(int arr[100][100],int r,int c,int key)
{
    int i=0;
    int j=c-1;
    while(i<=r-1 && j>=0)
    {
        if(key==arr[i][j])
        {
            cout<<key<<" is found at index "<<i<<","<<j<<endl;
            return true;
        }
        else if(key>arr[i][j])
        {
            i++;
        }
        else
        {
            j--;
        }

    }
    return false;
   
}
int main()
{
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
    if(matrixsearch(arr,r,c,key)==false)
    {
        cout<<key<<" is not present ";
    }
}