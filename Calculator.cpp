//                                         CALCULATOR


#include<iostream>
#include<cmath>
char oper;
double ans;
double num1,num2;


//root funcn
double root(double num,int n)
{
    /*
    derivative of x to the power n is n*(pow(x,n-1))

    nth root of num is x

    such that x = x - (((pow(x,n))-num)/(n*(pow(x,n-1))))
    */


    ans =1;
    for(int i=0;i<1000;i++)
    {
        ans = ans - (((pow(ans,n))-num)/(n*(pow(ans,n-1)))) ;
    }
    return ans;
}

//root  print funcn to print st for 1, nd for 2, rd for 3, th for rest;
void root_print(int num)
{
    if(num==1)
    {
        printf("st");
    }

    if(num==2)
    {
        printf("nd");
    }

    if(num==3)
    {
        printf("rd");
    }

    else
    {
        printf("th");
    }
}

//powers funcn
double power_func(double base, int exp)
{
    double ans=1;
    for(float i=0;i<exp;i++)
    {
        ans= ans*base;
    }
    return ans;
}

//factorial funcn
int factorial(int num)
{
    ans = 1;
    for(int i=0;i<num-1;i++)
    {
        ans = ans*(num-i);
    }
    return ans;
    
}

//print any ans
void print_ans(int a, int b)
{
    std::cout<<a<<" "<<oper<<" "<<b<<" is "<<ans;
}

//IO for Number 2
void num_2()
{ // 2nd number user input as num2
    std::cout<<"Enter the 2nd number: ";
    std::cin>>num2;
}


int main()
{
    // 1st number user input as num1
    std::cout<<"Enter the 1st number: ";
    std::cin>>num1;

    // operator user input as oper
    std::cout<<"+ for addition \n- for subtraction\n/ for division\n* for multiplication\n^ for powers\n! for factorial\n$ for roots\n\n";
    std::cin>>oper;



    // USING SWITCH CASE:
    switch (oper)
    {
    case '+':
        num_2();
        ans = num1 + num2;
        print_ans(num1,num2);
        break;
    
    case '-':
        num_2();
        ans = num1 - num2;
        print_ans(num1,num2);
        break;

    case '*':
        num_2();
        ans = num1 * num2;
        print_ans(num1,num2);
        break;

    case '/':
        num_2();
        ans = num1 / num2;
        print_ans(num1,num2);
        break;

    case '^':
        num_2();
        std::cout<<num1<<" to the power "<<num2<<" is "<<power_func(num1,num2);
        break;

    case '!':
        std::cout<<num1<<" factorial is "<<factorial(num1);
        break;

    case '$':
        num_2();
        std::cout<<num2;
        root_print(num2);
        std::cout<<" root of "<<num1<<" is "<<root(num1,num2)<<std::endl;
        break;

    default:
    std::cout<<"Please enter one of the following operator: \n";
    std::cout<<"+, -, /, *, ^, !, $";
    std::cin>>oper;
    break;
    }
    std::cout<<"\nThank You!!!!";

}
