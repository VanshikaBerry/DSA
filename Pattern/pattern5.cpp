#include <iostream>
using namespace std;
int main()
{
    int tr;
    cin>>tr;
    int rowno=1;
    while(rowno<=tr)
    {
        int st=1;
        while(st<=tr-(rowno-1))
        {
            cout<<'*';
            st=st+1;
        }
        cout<<endl;
        rowno=rowno+1;
    }
    return 0;
}
