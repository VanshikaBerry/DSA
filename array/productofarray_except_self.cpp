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
    long long int prod=1;
    for(int i=0;i<n;i++)
    {
        prod=prod*arr[i];
    }
    long long int temp=prod;
    for(int i=0;i<n;i++)
    {
        long long int temp=prod;
        cout<<temp/arr[i]<<" ";
    }
}
