#include <iostream>
using namespace std;
int len(char arr[100])
{
    int i=0;
    int count=0;
    while(arr[i]!='\0')
    {
        count++;
        i++;
    }
    return count;
}
int main()
{
    char arr[7]={'H','e','l',' ','L','O','\0'};
    int i=0;
    int j=len(arr)-1;
    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    cout<<arr;
}
