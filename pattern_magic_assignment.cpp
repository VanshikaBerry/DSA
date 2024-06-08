/*
for N=5
*********
**** ****
***   ***
**     **
*       *
**     **
***   ***
**** ****
*********
*/
#include <iostream>
using namespace std;
int main()
{
    int tr;
    cin>>tr;
    tr=2*tr-1;
    if (tr==1)
    {
        cout<<'*';
        return 0;
    }
    int st=1;
    while(st<=tr)
    {
        cout<<'*';
        st=st+1;
    }
    cout<<endl;
    int rowno=1;
    while (rowno<=(tr-1)/2)
    {
        int stt=1;
        while(stt<=(tr+1)/2-rowno)
        {
            cout<<'*';
            stt=stt+1;
        }
        int sp=1;
        while(sp<=2*rowno-1)
        {
            cout<<' ';
            sp=sp+1;
        }
        int sttt=1;
        while(sttt<=(tr+1)/2-rowno)
        {
            cout<<'*';
            sttt=sttt+1;
        }
        cout<<endl;
        rowno=rowno+1;
    }
    int rownoo=1;
    while(rownoo<=((tr-1)/2)-1)
    {
        int s=1;
        while(s<=rownoo+1)
        {
            cout<<'*';
            s=s+1;
        }
        int spp=1;
        while(spp<=((tr-2)-2*rownoo))
        {
            cout<<' ';
            spp=spp+1;
        }
        int ss=1;
        while(ss<=rownoo+1)
        {
            cout<<'*';
            ss=ss+1;
        }
        cout<<endl;
        rownoo=rownoo+1;
    }
    int stttttt=1;
    while(stttttt<=tr)
    {
        cout<<'*';
        stttttt=stttttt+1;
    }
    cout<<endl;
    return 0;
}