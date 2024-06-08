#include <iostream>
using namespace std;

int first_indexof7(int *arr,int n,int i)
{
    //base case
    if(i==n)
    {
        return -90;
    }



    //recursive case
    if(arr[i]==7)
    {
        return i;
    }
    return first_indexof7(arr,n,i+1);
}
int main()
{
    int arr[]={3,5,2,7,6,13,7,8};
    int n=sizeof(arr)/sizeof(int);
    int t=first_indexof7(arr,n,0);
    if(t<0)
    {
        cout<<"7 is not present ";
    }
    else{
        cout<<"7 is present at index "<<t;
    }

    return 0;
}