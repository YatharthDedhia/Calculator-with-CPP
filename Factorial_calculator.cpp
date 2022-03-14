//                                          FACTORIAL CALCULATOR


#include<iostream>
using namespace std;
int num,i,ans,o;

//Function for factorial:
int factorial(int number)
{
    /*ans = 1;
    for(i=0;i<number-1;i++)
    {
        ans = ans*(number-i);
    }*/

    ans = 1;
    i = 0;
    while(i<number-1)
    {
        ans = ans*(number-i);
        i++;
    }
    return ans;
    
}

int main()
{
    // user input as num
    cout<<"Enter the Number: "<<endl;
    cin>>num;

    //calling the func
    cout<<factorial(num);
} 