#include <iostream>
using namespace std;
int linearsearch(int arr[],int N,int key)
{
    for(int i=0;i<=N-1;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int N;
    cout<<"enter number of elements ";
    cin>>N;
    int arr[N];
    for(int i=0;i<=N-1;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    int key;
    cout<< "enter key";
    cin>>key;
    cout<<linearsearch(arr,N,key);
}