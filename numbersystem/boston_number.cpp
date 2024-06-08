#include <iostream>
using namespace std;
int sumof_digits_of_factor(int factor)
{
    int sum=0;
    while(factor>0)
    {
        int ld=factor%10;
        sum=sum+ld;
        factor=factor/10;
    }
    return sum;
}
int main()
{
    int number;
    cin>>number;
    int temp=number;
    int sum=0;
    int i=2;

    while(i<=number)
    {
        while(number%i==0)
        {
            if (i>9)
            {
                sum=sum+sumof_digits_of_factor(i);
                number=number/i;
            }
            else
            {
                sum=sum+i;
                number=number/i;

            }
            
        }
        i++;
    }
    int sumof_digits_of_given_number=0;
    while(temp>0)
    {
        int ld=temp%10;
        sumof_digits_of_given_number=sumof_digits_of_given_number+ld;
        temp=temp/10;
        
    }
    if(sumof_digits_of_given_number==sum)
    {
        cout<<"It is a boston number";
    }
    else{
        cout<<"not";
    }
    

    return 0;
}
