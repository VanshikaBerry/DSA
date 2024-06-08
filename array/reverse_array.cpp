#include<iostream>         //extra n space use ho raha
using namespace std;
int main(){
	float arr[]={3.2,2.2,5.4,3.1,7.1};

	int n=sizeof(arr)/sizeof(float);
    float arr2[n]={};
	int i=0;
	int j=n-1;

	for (int i=0,j=n-1;i<=n-1;i++,j--)
    {
        arr2[i]=arr[j];
    }


	for (int i = 0; i <=n-1; ++i)
	{
		cout<<arr2[i]<<" ";
	}
	

	return 0;
}