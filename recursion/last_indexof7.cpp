#include <iostream>
using namespace std;

int last_indexof7(int *arr,int n,int i)
{
    //base case
    if(i<=0)
    {
        return -90;
    }



    //recursive case
    if(arr[i]==7)
    {
        return i;
    }
    return last_indexof7(arr,n,i-1);
}
int main()
{
    int arr[]={3,5,2,7,6,13,7,8};
    int n=sizeof(arr)/sizeof(int);
    int t=last_indexof7(arr,n,n-1);
    if(t<0)
    {
        cout<<"7 is not present ";
    }
    else{
        cout<<"7 is present at index "<<t;
    }

    return 0;
}