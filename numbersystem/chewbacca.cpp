#include<iostream>
using namespace std;
int main()
{
    int number;         //45450  isko reverse wale method se karenge then 0 consider nahi hoga so cant do with that
                        //input 09802 isko input 9802 consider karna hai
    cin>>number; 
    int temp=number; 
    int n=0;
    if(number==0)
    {
        cout<<0;
        return 0;
    }
    while(number>0)
    {
        n++;
        number=number/10;
    }       
    int ans=0;
    int arr[n];
    int i=n-1;
    while(temp>0)
    {
        int ld=temp%10;
        if(ld>(9-ld))
        {
            ld=9-ld;
            arr[i]=ld;
            temp=temp/10;
            i--;
        }
        else
        {
            arr[i]=ld;
            temp=temp/10;
            i--;
        }
    }
    for(int i=0;i<=n-1;i++)
    {
        cout<<arr[i];
    }
    return 0;
    
}