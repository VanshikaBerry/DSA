#include <iostream>
using namespace std;
int main()
{   int tr;
    cin>>tr;
    int rowno=1;
    while(rowno<=tr)
    {   
        char stletter='A';                     
        int st=1;
        while (st<=rowno)
        {
            cout<<stletter;
            st=st+1;
            stletter=stletter+1;
        }
        cout<<endl;
        rowno=rowno+1;
    }
    return 0;
}