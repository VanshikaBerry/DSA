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
    /*for(int step=1;step<=n-1;step++)
    {
        for(int i=0;i<=n-step-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                swap(arr[i],arr[i+1]);
            }
        }
    }*/
    int t;
    cin>>t;
    for(int i=0;i<=n-3;i++ )
    {
        for(int j=i+1;j<=n-2;j++)
        {
            for(int k=j+1;k<=n-1;k++)
            {
                if(arr[i]+arr[j]+arr[k]==t)
                {
                    //upar bubble sort na lagakar
                    int p[3];
                    p[0]=arr[i];
                    p[1]=arr[j];
                    p[2]=arr[k];

                    for(int step=1;step<=2;step++)    
                    {
                       for(int i=0;i<=3-step-1;i++)
                       {                                             
                             if(p[i]>p[i+1])
                             {
                                    swap(p[i],p[i+1]);
                             }
                        }
                    }
                    cout<<p[0]<<","<<p[1]<<" and "<<p[2]<<endl;
                }
            }
        }
    }    
}    