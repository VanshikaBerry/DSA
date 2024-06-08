#include <iostream>
#include <math.h>
using namespace std;
/*  1st approach
int main()
{
    long long int number;
    cin>>number;
    if(number==0)
    {
        cout<<5;
        return 0;
    }
    long long int ans=0;
    
    while(number>0)
    {
        int ld=number%10;
        if(ld!=0)
        {                                
           ans=ans*10+ld;
           number=number/10;
        }
        else
        {
            ans=ans*10+5;
            number=number/10;
        }
    }
    
    long long int finalans=0;
    while(ans>0)
    {
        int ld=ans%10;
        finalans=finalans*10+ld;
        ans=ans/10;

    }
    cout<<finalans;
    return 0;
}*/

int main()
{
    long long int number;
    cin>>number;
    long long int ans=0;
    int i=0;
    if(number==0)
    {
        cout<<5;
        return 0;
    }
    while(number>0)
    {
        int ld=number%10;
        if(ld==0)
        {
            ld=5;
        }
        ans=ans+ld * pow(10,i);
        number=number/10;
        i++;
            
    }
    cout<<ans;
    return 0;
}
    

