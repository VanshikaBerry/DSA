#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int N1,N2;
    cin>>N1;
    cin>>N2;
    int largest;
    if(N1>N2)
    {
        largest=N1;
    }
    else{
        largest=N2;
    }
    int i=largest;
    int j=2;
    while(true)
    {
        if(i%N1==0 && i%N2==0)
        {
            cout<<"LCM is "<<i;
            break;
        }
        else
        {
            i=largest*j;
            j++;
        }
    }
    return 0;
    

}