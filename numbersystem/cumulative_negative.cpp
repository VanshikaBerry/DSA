#include<iostream>
using namespace std;
int main()
{
    int number;
    cin>>number;                         /*1 2 88 -100 49*/
    int sum=number;
    while(sum>=0)                           //can do it with vector also     (chatgpt)
    {
        cout<<number<<endl;
        cin>>number;
        sum=sum+number;

    }
    
    
    return 0;
}
    