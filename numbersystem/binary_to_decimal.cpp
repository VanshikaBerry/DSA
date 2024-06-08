#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    int number;
    cin>>number;
    int ans=0;
    int i=0;
    while(number>0)
    {
        int ld=number%10;
        ans=ans+(ld*pow(2,i));
        i++;
        number=number/10;
        
    }
    cout<<ans;
}