#include<iostream>
using namespace std;

int main()
{
    int N;
    
    cout<<"enter number of elements";
    cin>>N;
    int arr[N];
    for(int i=0;i<=N-1;i++)                   //0 2 4 1 3
    {
        cin>>arr[i];
    }
    int arr2[N];
    for(int i=0;i<=N-1;i++)
    {
        arr2[arr[i]]=i;             //0 3 1 4   2
    }
    for(int i=0;i<=N-1;i++)
    {
        cout<<arr2[i]<<" ";             
    }



}