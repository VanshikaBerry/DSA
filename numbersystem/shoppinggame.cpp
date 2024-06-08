#include<iostream>
using namespace std;
int main()
{
    int t;
    cout<<"enter number of test cases";
    cin>>t;
    int count=1;
    while(count<=t)
    {
        int M,N;
        cin>>M>>N;
        int i=1;
        while(true)
        {
            if(i%2==1)
            {
                M=M-i;
                if(M<0)
                {
                    cout<<"Harshit is winner"<<endl;
                    break;
                }
                i++;
                
            }
            else
            {
                N=N-i;
                if(N<0)
                {
                    cout<<"Ayush is winner"<<endl;
                    break;
                }
                i++;
            }

        }
        
        count++;

    }
   
    return 0;
}


        
        
        
        