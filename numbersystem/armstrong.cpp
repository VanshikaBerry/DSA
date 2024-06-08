#include<iostream>
#include <math.h>
using namespace std;
bool armstrong(int n)
{
    int count=0;
    int temp=n;
    int temp2=n;
    while(n>0)
    {
        count++;
        n=n/10;        
         
    }
    int sum=0;
    while(temp>0)
    {
        int ld=temp%10;
        sum=sum+pow(ld,count);
        temp=temp/10;
    }
    if (sum==temp2)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int number;
    cin>>number;
    int ans=armstrong(number);
    if (ans==1)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    
    return 0;
}

    