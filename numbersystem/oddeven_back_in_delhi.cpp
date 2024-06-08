#include<iostream>
using namespace std;
void check(int arr[],int n)
{
        
        int i=0;
        while(i<n)
        {
            int evensum=0;
            int oddsum=0;
            while(arr[i]>0)
            {
                int ld=arr[i]%10;
                if(ld%2==0)
                {
                    evensum=evensum+ld;
                    arr[i]=arr[i]/10;
                }
                else
                {
                    oddsum=oddsum+ld;
                    arr[i]=arr[i]/10;
                }
            }
            if((evensum % 4==0) ||(oddsum%3==0))
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
            i++;
        }

}

        
int main()
{
    int arr[100];
    int n;
    cout<<"enter number of cars";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    check(arr,n);
    
    return 0;


}