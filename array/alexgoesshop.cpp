#include<iostream>
using namespace std;

int main()
{
    int N;
    
    cout<<"enter number of items";
    cin>>N;
    int arr[N];
    for(int i=0;i<=N-1;i++)                   
    {
        cin>>arr[i];
    }
    int t;                                        // 100 200 400 100
                                                  // 500    4
    cout<<"enter number of case ";
    cin>>t;
    for(int count=1;count<=t;count++)
    {
        int m;
        cout<<"enter money alex has ";
        cin>>m;
        int c=0;

        for(int i=0;i<=N-1;i++)
        {
            if(m%arr[i]==0)
            {
                c++;
            }
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