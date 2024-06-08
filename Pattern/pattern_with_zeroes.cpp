#include <iostream>
using namespace std;
int main()
{   int tr;
    cin>>tr;
    cout<<'1';
    cout<<endl;
    int rowno=2;
    while(rowno<=tr)
    {
        cout<<rowno<<'\t';
        int sp=1;
        while(sp<=rowno-2)
        {
            cout<<'0'<<'\t';
            sp=sp+1;
        }
        cout<<rowno;
        cout<<endl;
        rowno=rowno+1;
    }
    
    return 0;
}