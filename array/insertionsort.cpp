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
    int j;
    for(int i=1;i<=n-1;i++)
    {
        int ele=arr[i];
        for(j=i-1;j>=0;j--)
        {
            if(ele<arr[j])
            {
                arr[j+1]=arr[j];               
            }
            else
            {
                break;

            }
        }
        arr[j+1]=ele;

    }
    for(int i=0;i<=n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
}
    
  