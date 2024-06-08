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
            cout<<' ';
            sp=sp+1;
        }
        int st=1;
        while(st<=rowno+(rowno-1))
        {
            cout<<'*';
            st=st+1;
        }
        sp=1;
        while(sp<=tr-rowno)
        {
            cout<<' ';
            sp=sp+1;
        }
        cout<<endl;
        rowno=rowno+1;
    }
    return 0;
}

