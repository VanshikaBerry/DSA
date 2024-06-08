#include<iostream>
using namespace std;
void spiralmatrix(int arr[100][100],int r,int c)
{
    int sr=0,er=r-1;
    int sc=0,ec=c-1;
    while(sr<=er && sc<=ec)
    {
        for(int j=sc;j<=ec;j++)
        {
            cout<<arr[sr][j]<<" ";
        }
        sr++;
        for(int i=sr;i<=er;i++)
        {
            cout<<arr[i][ec]<<" ";
        }
        ec--;
        if(sr<=er)
        {
            for(int k=ec;k>=sc;k--)
            {
            cout<<arr[er][k]<<" ";
            }
            er--;
        }
        

        if(sc<=ec)
        {
            for(int l=er;l>=sr;l--)
            {
                cout<<arr[l][sc]<<" ";
            }
            sc++;
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
    spiralmatrix(arr,r,c);
}
 