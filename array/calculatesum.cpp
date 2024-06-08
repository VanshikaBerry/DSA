#include<iostream>
using namespace std;

int main()
{
    int N;
    cout<<"enter number of elements";
    cin>>N;
    int arr[N];
    for(int i=0;i<=N-1;i++)                   
    {
        cin>>arr[i];
    }
    int t;                                        // 100 200 400 100
                                                  // 500    4
    cout<<"enter number of operations ";
    cin>>t;
    for(int op=1;op<=t;op++)
    {
        int pos;
        cout<<"enter how much prev position ";
        cin>>pos;
        int arr2[N];

        for(int i=0;i<=N-1;i++)
        {
            arr2[i]=arr[i]+arr[i-2];
        }
        int shpkeeper_says;
        cout<<"enter shopkeepers claim ";
        cin>>shpkeeper_says;
        if(shpkeeper_says<=c)
        {
            cout<<"Yes"<<endl;

        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}