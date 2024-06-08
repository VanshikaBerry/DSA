#include <iostream>
#include <math.h>
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
    for(int i=0;i<n;i++)
    {
        arr[i]=pow(arr[i],2);
    }
    for(int step=1;step<n;step++)          /*1 4          9 8 7 6 5     0 to 3
                                           2 3          8 7 6 5 9     0 to 2
                                           3 2          7 6 5 8 9     0 to 1*/
    {
        for(int i=0;i<=n-step-1;i++)
        {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    
        }
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}