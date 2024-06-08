#include<iostream>
#include <math.h>
using namespace std;
void armstrong(int n1,int n2)
{
    
    while(n1<=n2)
    {
        int count=0;
        int temp1=n1;
        int temp2=n1;
        while(temp1>0)
        {
            count++;
            temp1=temp1/10;        
         
        }
        int sum=0;
        while(temp2>0)
        {
            int ld=temp2%10;
            sum=sum+pow(ld,count);
            temp2=temp2/10;
        }
        if (sum==n1)
        {
            cout<<n1<<endl;
            n1++;
        }
        else
        {
            n1++;
        }
    }
}

int main()
{
    int n1,n2;
    cin>>n1>>n2;
    armstrong(n1,n2);
    
    return 0;
}

    