#include <iostream>
using namespace std;
int main()
{   int tr;
    cin>>tr;
    int rowno=1;
    //int rowno=1;//error scope ka problem cant declare again
    while(rowno<=tr)
    {
        int st=1;
        while (st<=rowno)
        {
            cout<<'*';
            st=st+1;
        }
        cout<<endl;
        rowno=rowno+1;
    }
    return 0;
}