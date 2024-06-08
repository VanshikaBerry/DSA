#include <iostream>
using namespace std;
int main()
{
    int number;
    cin>>number;
    int digit;
    cin>>digit;
    int count=0;
    while(number>0)
    {
        int ld=number%10;
        if(ld==digit)
        {
            count++;

        }
        number=number/10;
    }
    cout<<count;
    
    return 0; 
}