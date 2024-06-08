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
        char stch='A';
        while(st<=tr-(rowno-1))
        {
            cout<<stch;
            st=st+1;
            stch=stch+1;
        }
        int star=1;
        char stchar=stch-1;
        while(star<=tr-(rowno-1))
        {
            cout<<stchar;
            star=star+1;
            stchar=stchar-1;
        }

        cout<<endl;
        rowno=rowno+1;
    }
    return 0;
}
