#include <iostream>
using namespace std;
int main()
{   
    int tr;
    cin>>tr;
    
    int rowno=1;
    while(rowno<=tr-1)
    {
        int stno=1;
        int st=1;
        while (st<=rowno)
        {
            cout<<stno<<'\t';
            st=st+1;
            stno=stno+1;
        }
        int sp=1;
        while(sp<=(tr*2-1)-2*rowno)
        {
            cout<<' '<<'\t';
            sp=sp+1;
        }
        int hash=1;
        int stnooo=stno-1;
        while(hash<=rowno)
        {
            cout<<stnooo<<'\t';
            hash=hash+1;
            stnooo=stnooo-1;
        }
        cout<<endl;
        rowno=rowno+1;
    }
    int stnoo=1;
    while(stnoo<=tr)
    {
        cout<<stnoo<<'\t';
        stnoo=stnoo+1;
    }
    int hashh=1;
    int stnumber=tr-1;
    while(hashh<=tr-1)
    {
        cout<<stnumber<<'\t';
        hashh=hashh+1;
        stnumber=stnumber-1;
    }
    return 0;
}