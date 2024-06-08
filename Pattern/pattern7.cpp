#include <iostream>
using namespace std;
int main()
{   int tr;
    cin>>tr;
    int rowno=1;
    while(rowno<=tr)
    {   
        int stno=1;                      
        //int st=1;
        //while (st<=rowno)
        while(stno<=rowno)
        {
            cout<<stno;
            //st=st+1;
            stno=stno+1;
        }
        cout<<endl;
        rowno=rowno+1;
    }
    return 0;
}