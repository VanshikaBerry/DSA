#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int n=1;
    int count=1;
    while(count<=n1)
    {
        if ((3*n+2)%n2==0)
        {
            n++;
            

        }
        else
        {
            cout<<3*n+2<<endl;
            n++;
            count++;
        }
    }
    return 0;
}