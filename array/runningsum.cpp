#include<iostream>
using namespace std;

int main()
{
    int N;
    
    cout<<"enter number of elements";
    cin>>N;
    int arr[N];
    int sum=0;
    for(int i=0;i<=N-1;i++)                   //0 2 4 1 3
    {
        cin>>arr[i];
    }
    for(int i=0;i<=N-1;i++)
    {
        sum=sum+arr[i];
        cout<<sum<<" ";
    }

}