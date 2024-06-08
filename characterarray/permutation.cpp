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
bool permutation(char a[],char b[])
{
    if(len(a)!=len(b))
    {
        return false;
    }
    int p[26]={0};
    for(int i=0; a[i]!='\0';i++)
    {
        p[a[i]-'A']++;

    }
    for(int i=0; b[i]!='\0';i++)
    {
        p[b[i]-'A']--;
    }
    for(int i=0; i<=25;i++)
    {
        if(p[i]!=0)
        {
            return false;
        }
    }
    return true;

}
int main()
{
    char a[100];
    cin.getline(a,100);
    char b[100];
    cin.getline(b,100);
    if (permutation(a,b))
    {
        cout<<"both strings are permuatation of each other"<<endl;
    }
    else
    {
        cout<<"not";
    }
}