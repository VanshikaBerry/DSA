#include<iostream>         
using namespace std;
int main(){
	float arr[]={3.2,2.2,5.4,3.1,7.1};

	int n=sizeof(arr)/sizeof(float);

	for (int i=0,j=n-1;i<j;i++,j--)
    {
        swap(arr[i],arr[j]);
    }


	for (int i = 0; i <=n-1; ++i)
	{
		cout<<arr[i]<<" ";
	}
	

	return 0;
}