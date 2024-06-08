#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int rowno=1;
    while(rowno<=n+1)
    {
        
        int sp=1;
        while(sp<=rowno-1)
        {
            cout<<' '<<' ';
            sp=sp+1;
        }
        int hash=1;
        int stno=n+1-rowno;
        while(hash<=n+2-rowno)
        {
            cout<<stno<<' ';
            hash=hash+1;
            stno=stno-1;
        }
        int st=1;
        int stnoo=1;
        while(st<=n+1-rowno)
        {
            cout<<stnoo<<' ';
            st=st+1;
            stnoo=stnoo+1;
        }
        cout<<endl;
        rowno=rowno+1;
    }
    int rownoo=1;
    while(rownoo<=n)
    {
        int spp=1;
        while(spp<=n-rownoo)
        {
           cout<<' '<<' ';
           spp=spp+1;
        }
        int hashh=1;
        int startno=rownoo;
        while(hashh<=rownoo+1)
        {
            cout<<startno<<' ';
            hashh=hashh+1;
            startno=startno-1;
        }
        int star=1;
        int stnooo=1;
        while(star<=rownoo)
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