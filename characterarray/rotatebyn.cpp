#include<iostream>
using namespace std;

int len(char a[100])
{
	int i=0;
	int count=0;


	while(a[i]!='\0')
    {
			count++;
	        i++;

	}

	return count;
}
void rotatebyn(char arr[],int n)
{
    int m=len(arr);
    int p=len(arr);
    int j=0;
    for(int i=len(arr)-1;i>=0;i--)
    {
        arr[i+n]=arr[i];

    }
    for(int i=1;i<=n;i++)
    {
        swap(arr[m],arr[j]);
        j++;
        m++;

    }
    arr[p]='\0';
    cout<<arr;
    
    
}
int main()
{
    char arr[100];
    cin.getline(arr,100);
    int n;
    cin>>n;
    n=n%len(arr);
    rotatebyn(arr,n);

}