#include<iostream>
using namespace std;

void waveprint(int arr[100][100],int r,int c)
{
    for(int cc=0;cc<=c-1;cc++)
    {

        if(cc%2==0)
        {
        for(int j=0;j<=r-1;j++)
        {
            cout<<arr[j][cc]<<" ";
        }

        }
        else
        {
            for(int j=r-1;j>=0;j--)
            {
                cout<<arr[j][cc]<<" ";
            }
        }
    
    }
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
    waveprint(arr,r,c);
}