#include <iostream>
#include<limits.h>
using namespace std;

int main()
{
    int t;
    cout<<"enter number of test cases ";
    cin>>t;
    int n;
    for(int caseno=1;caseno<=t;caseno++)
    {
        cout<<"enter number of roses ";
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];

        }
        int m;
        cout<<"enter the money that deepak has ";
        cin>>m;
        int difference=INT_MAX;
        int smaller;
        int larger;
        int rose1,rose2;

        for(int i=0;i<=n-2  ;i++)
        {
            for(int j=i+1;j<=n-1;j++)
            {
                if(arr[i]+arr[j]==m)
                {
                if(arr[i]>=arr[j])
                {
                    larger=arr[i];
                    smaller=arr[j];
                }
                else{
                    larger=arr[j];
                    smaller=arr[i];
                }
                if(difference>larger-smaller)
                {
                    difference=larger-smaller;
                    rose1=smaller;
                    rose2=larger;
                }
                }
            }
        }
        cout<<"Deepak should buy roses whose prices are "<<rose1<<" and "<<rose2<<endl;

    }
        
}