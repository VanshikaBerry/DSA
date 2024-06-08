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
    int left=0;
    int right=n-1;
    while(left<right)
    {
        if(arr[left]+arr[right]<t)
        {
            left++;
        }
        else if(arr[left]+arr[right]>t)
        {
            right--;
        }
        else 
        {
            cout<<arr[left]<<" and "<<arr[right]<<endl;    
            left++;
            right--;
        }
    }
     
}    