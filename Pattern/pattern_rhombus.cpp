#include <iostream>
using namespace std;
int main()                  
{
    int n;
    cin>>n;
    int rowno=1;
    while(rowno<=n)
    {
        int sp=1;
        while(sp<=n-rowno)
        {
            cout<<' '<<'\t';
            sp=sp+1;
        }
        int st=1;
        int stno=rowno;
        while(st<=rowno)
        {
            cout<<stno<<'\t';
            st=st+1;
            stno=stno+1;
        }
        int hash=1;
        int startno=stno-2;
        while(hash<=rowno-1)
        {
            cout<<startno<<'\t';
            hash=hash+1;
            startno=startno-1;
        }
        cout<<endl;
        rowno=rowno+1;
    }
    int rownoo=1;
    while(rownoo<=n-1)
    {
        int spp=1;
        while(spp<=rownoo)
        {
            cout<<' '<<'\t';
            spp=spp+1;
        }
        int star=1;
        int startnoo=n-rownoo;
        while(star<=n-rownoo)
        {
            cout<<startnoo<<'\t';
            star=star+1;
            startnoo=startnoo+1;
        }
        int hashh=1;
        int stnumber=startnoo-2;
        while(hashh<=n-1-rownoo)
        {
            cout<<stnumber<<'\t';
            hashh=hashh+1;
            stnumber=stnumber-1;
        }
        cout<<endl;
        rownoo=rownoo+1;
    }
    return 0;
}
    