#include<iostream>
using namespace std;

int len(char a[100]){
	int i=0;
	int count=0;


	while(a[i]!='\0'){
			count++;
	i++;

	}

	return count;




}
void copy(char arr[],char largeststring[])
{
    for(int i=0;i<=len(arr);i++)
    {
        largeststring[i]=arr[i];
    }
}
int main()
{
    int n;
    cout<<"enter number of strings ";
    cin>>n;
    cin.ignore();
    char largeststring[100];
    char arr[100];
    cin.getline(arr,100);
    copy(arr,largeststring);
    for(int i=1;i<=n-1;i++)
    {
        cin.getline(arr,100);
        if(len(arr)>len(largeststring))
        {
            copy(arr,largeststring);
        }
    }
    cout<<largeststring<<endl;
    cout<<len(largeststring);
}