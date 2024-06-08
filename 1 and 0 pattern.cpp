#include <iostream>
using namespace std;
int main()
{   int tr;
    cin>>tr;
    int rowno=1;
    while(rowno<=tr)
    {
        if(rowno%2==1)
        {
            int st=1;
            int stno=1;
            while (st<=rowno)
            {
                cout<<stno;
                st=st+1;
                if(stno==1)     //if else ki jagah   stno=1-stno;
                {
                    stno=0;
                }
                else{
                    stno=1;
                }
            }
        }
        else
        {
            int st=1;
            int stno=0;
            while (st<=rowno)
            {
                cout<<stno;
                st=st+1;                
                if(stno==0)                 //stno=1-stno
                {
                    stno=1;
                }
                else{
                    stno=0;
                }

            }

        }
        cout<<endl;
        rowno=rowno+1;
    }
    return 0;
}