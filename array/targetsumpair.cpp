#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int step=1;step<=n-1;step++)
    {
        for(int i=0;i<=n-step-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                swap(arr[i],arr[i+1]);
            }
        }
    }
    int t;
    cin>>t;
    for(int i=0;i<=n-2;i++ )
    {
        for(int j=i+1;j<=n-1;j++)
        {
            if(arr[i]+arr[j]==t)          // 2 2 4 4
            {
                cout<<arr[i]<<" and "<<arr[j]<<endl;
            }
        }
    }
     
}    