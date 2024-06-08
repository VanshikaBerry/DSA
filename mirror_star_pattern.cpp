#include <iostream>
using namespace std;
int main()                 //1 input ke liye 1 star print kar raha hai
{
    int tr;
    cin>>tr;
    if(tr%2==0)
    {
        return 0;
    }

    int rowno=1;
    while(rowno<=(tr+1)/2)
    {
        int sp=1;
        while(sp<=(tr+1)/2-rowno)
        {
            cout<<' '<<'\t';
            sp=sp+1;
        }
        int st=1;
        while(st<=2*rowno-1)
        {
            cout<<'*'<<'\t';
            st=st+1;
        }
        cout<<endl;
        rowno=rowno+1;
    }
    rowno=1;
    while(rowno<=(tr-1)/2)
    {
        int spc=1;
        while(spc<=rowno)
        {
            cout<<' '<<'\t';
            spc=spc+1;
        }
        int str=1;
        while(str<=tr-2*rowno)
        {
            cout<<'*'<<'\t';
            str=str+1;
        }
        cout<<endl;
        rowno=rowno+1;
    }
   
    return 0;
}
