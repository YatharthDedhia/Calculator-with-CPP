#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double num,ans;
    int n;

    //Number user input
    cout<<"Enter the number:\n";
    cin >>num;

    //Root user input
    cout<<"Enter the root you want:\n";
    cin >>n;

    /*THEORY:
    derivative of x to the power n is n*(pow(x,n-1))

    nth root of num is x

    such that x = x - (((pow(x,n))-num)/(n*(pow(x,n-1))))
    */

    //Root finding Algo
    ans =1;
    for(int i=0;i<1000;i++)
    {
        ans = ans - (((pow(ans,n))-num)/(n*(pow(ans,n-1)))) ;
    }
    

    //printing ans
    if(n==1)
    {
        cout<<"1st root of "<<num<<" is "<<ans;
    }

    else if(n==2)
    {
        cout<<"Square root of "<<num<<" is "<<ans;
    }

    else if(n==3)
    {
        cout<<"Cube root of "<<num<<" is "<<ans;
    }

    else
    {
        cout<<n<<"th root of "<<num<<" is "<<ans;
    }
}