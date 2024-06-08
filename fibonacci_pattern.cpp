#include <iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   if(n==1)
   {
    cout<<0;
    return 0;
   }
   cout<<0<<endl<<1<<'\t'<<1<<endl;
   int a=1;
   int b=1;
   int c=a+b;
   int rowno=1;
   while(rowno<=n-2)
   {
        int st=1;
        while(st<=rowno+2)
       {
          cout<<c<<'\t';
           st=st+1;
           a=b;
           b=c;
           c=a+b;
        }
        cout<<endl;
        rowno=rowno+1;
   }
   return 0;
}