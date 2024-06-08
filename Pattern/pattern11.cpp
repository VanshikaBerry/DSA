#include <iostream>
using namespace std;
int main()
{
    int tr;
    cin>>tr;
    int rowno=1;
    while(rowno<=tr)
    {
        char stchar='A';
        int st=1;
        while(st<=tr-(rowno-1))
        {
            cout<<stchar<<' ';
            st=st+1;
            stchar=stchar+1;
        }
        int hash=1;
        char start=stchar-2;
        while(hash<=tr-rowno)
        {
            cout<<start<<' ';
            hash=hash+1;
            start=start-1;
        }
        cout<<endl;
        rowno=rowno+1;
    }
    return 0;
}
