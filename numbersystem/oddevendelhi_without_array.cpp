#include<iostream>
using namespace std;


        
int main()
{
    int n;
    cout<<"enter number of cars";
    cin>>n;
    int number;
    int count=1;
    while(count<=n)
    {
        cin>>number;
        int evensum=0;
        int oddsum=0;
        while(number>0)
        {
            int ld=number%10;
            if(ld%2==0)
            {
                evensum=evensum+ld;
                number=number/10;
            }
            else
            {
                oddsum=oddsum+ld;
                number=number/10;
            }
        }
        if((evensum % 4==0) ||(oddsum%3==0))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        count++;
    }
    
    
    return 0;


}