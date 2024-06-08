#include <iostream>
using namespace std;

int last_indexof7_m2(int *arr,int n)
{
    //base case
    if(n==0)
    {
        return -90;
    }



    //recursive case
    if(arr[n-1]==7)
    {
        return n-1;
    }
    return last_indexof7_m2(arr,n-1);
}
int main()
{
    int arr[]={3,5,2,7,6,13,7,8,12};
    int n=sizeof(arr)/sizeof(int);
    int t=last_indexof7_m2(arr,n);
    if(t<0)
    {
        cout<<"7 is not present ";
    }
    else{
        cout<<"7 is present at index "<<t;
    }

    return 0;
}