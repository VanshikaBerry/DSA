#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number of elements";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++)
    { 
        cin>>arr[i];
    }
    int ub;
    cout<<"enter upperbound of the range";
    cin>>ub;
    int freq[ub+1]={0};
    for(int i=0;i<=n-1;i++)
    {
        freq[arr[i]]++;
    }
    for(int k=0;k<=ub;k++)
    {
        for(int count=1;count<=freq[k];count++)
        {
            cout<<k<<" ";
        }
    }
    return 0;
}