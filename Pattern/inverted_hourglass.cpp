#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int rowno=1;
    while(rowno<=n)
    {
        int hash=1;
        int stno=n;
        while(hash<=rowno)
        {
            cout<<stno<<' ';
            hash=hash+1;
            stno=stno-1;
        }
        int sp=1;
        while(sp<=(2*n+1)-2*rowno)
        {
            cout<<' '<<' ';
            sp=sp+1;
        }
        int st=1;
        int stnoo=stno+1;
        while(st<=rowno)
        {
            cout<<stnoo<<' ';
            st=st+1;
            stnoo=stnoo+1;
        }
        cout<<endl;
        rowno=rowno+1;
    }
    int start=n;
    while(start>=0)
    {
        cout<<start<<' ';
        start=start-1;
    }
    start=1;
    while(start<=n)
    {
        cout<<start<<' ';
        start=start+1;
    }
    cout<<endl;
    int rownoo=1;
    while(rownoo<=n)
    {
        int hashh=1;
        int startno=n;
        while(hashh<=n+1-rownoo)
        {
            cout<<startno<<' ';
            hashh=hashh+1;
            startno=startno-1;
        }
        int spp=1;
        while(spp<=2*rownoo-1)
        {
           cout<<' '<<' ';
           spp=spp+1;
        }
        
        int star=1;
        int stnooo=rownoo;
        while(star<=n+1-rownoo)
        {
            cout<<stnooo<<' ';
            star=star+1;
            stnooo=stnooo+1;
        }
        cout<<endl;
        rownoo=rownoo+1;
    }

    return 0;
}