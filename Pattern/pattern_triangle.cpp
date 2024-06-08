#include <iostream>
using namespace std;
int main()
{    
    int tr;
    cin>>tr;
    int rowno=1;
    while(rowno<=tr)
    {
        int sp=1;
        while(sp<=tr-rowno)
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
        int stnoo=stno-2;
        while(hash<=rowno-1)
        {
            cout<<stnoo<<'\t';
            hash=hash+1;
            stnoo=stnoo-1;
        }
        cout<<endl;
        rowno=rowno+1;

    }
    
}