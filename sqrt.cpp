/*
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float num,ans, i, final_ans;
    cout<<"Enter a number for sqrt:\n";
    cin >>num;
    i=0;
    for(ans=0;abs(i-num)>0.001;ans+=0.001)
    {
        i=ans*ans;
        cout<<ans<<endl;
    }
    cout<<ans;
}  
*/


/*
#include<stdio.h>
#include<conio.h>
int main()
{
int n;
float temp=0, sqrt;
//clrscr();
printf("\nEnter N: \n");
scanf("%d", &n);
// store the half of the given number
sqrt = n / 2;
// Iterate until sqrt is different of temp, that is updated on the loop
while(sqrt != temp)
{
temp = sqrt;
sqrt = ( n/temp + temp) / 2;
}
printf("The square root of '%d' is '%f'", n, sqrt);
getch();
}
*/


#include<iostream>
using namespace std;
int main()
{
    double num,ans;
    // User input
    cout<<"Enter a number: ";
    cin>>num;

    //Newton's method:
    ans =1;
    for(int i=0;i<100;i++)
    {
        ans = ans - (((ans*ans)-num)/(ans+ans)) ;
    }
        cout<<" Square root of "<<num<<" is "<<ans ;
} 