//                                            POWER FUNCTION


#include<iostream>

using std::cout;
using std::cin;


//function to calculate the power
int power_func(int base, int exp)
{
    int ans=1;
    for(int i=0;i<exp;i++)
    {
        ans= ans*base;
    }
    return ans;
}


//function to printing the ans
void print_ans(int anything_1, int anything_2)
{
    cout<<anything_1<<" to the power "<<anything_2<<" is "<<power_func(anything_1,anything_2)<<std::endl<<"Thank You";
}


int main()

//taking user input
{
    int x,y;
    cout<<"Number: \n";
    cin>>x;
    cout<<"Exponent: \n";
    cin>>y;

    print_ans(x,y);
}   