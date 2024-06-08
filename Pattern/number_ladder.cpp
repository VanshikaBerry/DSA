#include <iostream>
using namespace std;
int main()
{   int tr;
    cin>>tr;
    int rowno=1;
    int stno=1; 
    while(rowno<=tr)
    {   
                             
        int st=1;
        while (st<=rowno)
        {
            cout<<stno<<'\t';
            st=st+1;
            stno=stno+1;
        }
        cout<<endl;
        rowno=rowno+1;
    }
    return 0;
}