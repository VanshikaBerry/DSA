#include <iostream>
#include <math.h>
using namespace std;              //can do it with array also
int main()
{
    int n;
	cout<<"enter how many binary numbers "<<endl;
    cin>>n;
    for(int count=1;count<=n;count++)
    {
        long long int b;
        cout<<"enter the binary number ";
        cin>>b;
        long long int temp=b;
        int c=0;
        while(temp>0)
        {
            c++;
            temp=temp/10;
        }
        int res=0;
        long long int temp2=b;
        for(int i=0;i<c;i++)
        {
            int ld=temp2%10;
            res=res+(pow(2,i)*ld);
            temp2=temp2/10;
        }
        cout<<res<<endl;

    }
}