#include <iostream>
using namespace std;
int main()
{   
    int number;
    cin>>number;
    int n=0;
    int temp=number;
    while(number>0)
    {                                                 //32145       //12543    //298371456    //875123694
        n++;
        number=number/10;
    }
    int arr[n+1];
    for(int i=1;i<=n;i++)
    {
        int ld=temp%10;
        arr[ld]=i;
        temp=temp/10;

    }
    for(int i=0,j=n;i<j;i++,j--)
    {
        swap(arr[i],arr[j]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;                            
}                                                    