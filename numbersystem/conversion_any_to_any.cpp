#include<iostream>
#include <math.h>
using namespace std;

int main()
{
    int sb,db,sn;
    cin>>sb>>db>>sn;
    int sum=0;
    int i=0;
    if(sb==1 && db==1)
    {
        cout<<sn;
        return 0;  
    }
    //converting source base to base 10 value
    while(sn>0)
    {
        int ld=sn%10;
        sum=sum+ld*pow(sb,i);
        sn=sn/10;
        i++;
    }
    if(db==1)
    {
        cout<<"answer is"<<sum;
        return 0;
    }
    int arr[20];
    int j=0;
    while(sum>0)
    {
        int rem=sum%db;
        arr[j]=rem;
        sum=sum/db;
        j++;

    }
    int n=j;
    for(int i=n-1;i>=0;i--)
    {
        cout<<arr[i];
    }
}

    

