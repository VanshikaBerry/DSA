#include <iostream>
using namespace std;
int main()
{
    
    int n;
    cout<<"enter number of elements ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        cin>>arr[i];
    }
    for(int pos=0;pos<=n-2;pos++)
    {
        int minindex=pos;
        for(int j=pos+1;j<=n-1;j++)
        {
            if(arr[minindex]>arr[j])
            {
                minindex=j;
            }
        }
        swap(arr[pos],arr[minindex]);

    }
    for(int i=0;i<=n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}