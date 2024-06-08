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
    int i=0;
    
    for(int i=0;i<=n-3;i++)
    {
        int k=n-1;
        for(int j=i+1;j<k;)
        {
            if(arr[i]+arr[j]+arr[k]==t)
            {
                cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
                j++;
            }
            else if(arr[i]+arr[j]+arr[k]<t)                    // 1 2 4 6 7 8
                                                                //1 2 4 6 7
            {
                j++;
            }
            else{
                k--;
            }
        }

    }      
     
}    