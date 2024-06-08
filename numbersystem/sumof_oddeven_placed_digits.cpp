#include <iostream>
using namespace std;
int main()
{   
    int number;
    cin>>number;
    int pos=1;
    int oddsum=0;
    int evensum=0;                 //345967     //2 3 6 5
    while(number>0)
    {
        int ld=number%10;
        if(pos%2==1)
        {
            //int ld=number%10;
            oddsum=oddsum+ld;
            //number=number/10;
            //pos=pos+1;
        }    
        else
        {
            //int ld=number%10;
            evensum=evensum+ld;
            //number=number/10;
            //pos=pos+1;
        }
        number=number/10;
        pos=pos+1;                   

    }
    cout<<"sum of digits at odd places "<<oddsum<<endl;
    cout<<"sum of digits at even places "<<evensum;
    return 0;
}
/*#include <iostream>
using namespace std;
int main()
{   
    int number;
    cin>>number;
    int pos=1;
    int oddsum=0;
    int evensum=0;                 //345967     //2 3 6 5
    for(int pos=1;number>0;pos++)
    {
        int ld=number%10;
        if(pos%2==1)
        {
            //int ld=number%10;
            oddsum=oddsum+ld;
            //number=number/10;
            //pos=pos+1;
        }    
        else
        {
            //int ld=number%10;
            evensum=evensum+ld;
            //number=number/10;
            //pos=pos+1;
        }
        number=number/10;                  

    }
    cout<<"sum of digits at odd places "<<oddsum<<endl;
    cout<<"sum of digits at even places "<<evensum;
    return 0;
}*/

    
