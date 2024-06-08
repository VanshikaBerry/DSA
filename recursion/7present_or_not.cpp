#include <iostream>
using namespace std;

bool check_7_present(int *arr,int n)
{
    //base case
    if(n==0)
    {
        return false;
    }



    //recursive case
    if(arr[0]==7 or check_7_present(arr+1,n-1))
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int arr[]={3,5,2,6,13};
    int n=sizeof(arr)/sizeof(int);
    cout<<check_7_present(arr,n);
    return 0;
}