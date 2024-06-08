#include<iostream>
using namespace std;

int len(char a[100])
{
	int i=0;
	int count=0;


	while(a[i]!='\0'){
			count++;
	i++;

	}

	return count;
}
void printsubstrings(char arr[])
{
    for(int i=0;i<len(arr);i++)
    {
        for(int j=i;j<len(arr);j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<arr[k];
            }
            cout<<endl;

        }
    }
    cout<<'\0'<<endl;

}
        

int main()
{
    char arr[100];
    cin.getline(arr,100);
    printsubstrings(arr);
}
