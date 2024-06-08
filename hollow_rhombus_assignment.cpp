#include<iostream>
using namespace std;

int main() {
	int tr;
	cout<<"enter no of rows";
	cin>>tr;
	int sp=1;
	while(sp<=tr-1)
	{
		cout<<' ';
		sp=sp+1;
	}
	int st=1;
	while(st<=tr)
	{
		cout<<'*';
		st=st+1;
	}
	cout<<endl;
	int rowno=1;
	while(rowno<=tr-2)
	{
		int spp=1;
		while(spp<=tr-1-rowno)
		{
			cout<<' ';
			spp=spp+1;
		}
		cout<<'*';
		int sppp=1;
		while(sppp<=tr-2)
		{
			cout<<' ';
			sppp=sppp+1;
		}
		cout<<'*';
		cout<<endl;
		rowno=rowno+1;
	}
	int stt=1;
	while(stt<=tr)
	{
		cout<<'*';
		stt=stt+1;
	}
	cout<<endl;
    return 0;
}
	
	

	
