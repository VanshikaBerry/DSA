#include <iostream>
using namespace std;
int main()
{
    int N1,N2;
    cin>>N1;
    cin>>N2;
    int smaller;
    if(N1<N2)
    {
        smaller=N1;
    }
    else{
        smaller=N2;
    }
    int i=smaller;
    while(true)
    {
        if(N1%i==0 && N2%i==0)
        {
            cout<<"GCD is "<<i;
            break;
        }
        else
        {
            i=i/2;
        }
    }
    
}

//#include <iostream>  
using namespace std; 
void change(char data)  
{  
    // data = 5;  
     cout<<data;
}  
  
int main()  
{  
    int data = 65;  
    change(data);  
    cout << "Value of the data is: " << data<< endl;  
    return 0;  
}  