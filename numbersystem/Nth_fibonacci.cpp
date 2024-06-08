#include <iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   if(n==0)
   {
    cout<<0;
    return 0;
   }
   if(n==1)
   {
    cout<<1;
    return 0;
   }
   int count=2;
   int a=0;
   int b=1;
   int c=0;
   
   while(count<=n)   
   { 
    c=(a+b);
    a=b;
    b=c;
    count=count+1;
   }
   cout<<c;
   
   return 0;
}