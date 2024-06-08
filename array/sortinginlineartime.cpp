#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	int freq[3]={0};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
	for(int i=0;i<n;i++)
	{
		freq[arr[i]]++;

	}
	for(int i=0;i<3;i++)
	{
		for(int count=1;count<=freq[i];count++)
		{
			cout<<i<<endl;

	    }
	}
	return 0;
}