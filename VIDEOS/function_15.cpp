#include<iostream>
using namespace std;
int sum(int, int);      // we can do it like that also,,, this is we called function prototypes, we use it if we want to write the func after the main() func
void nullfunc();        // also a prototype 
/*int sum(int a, int b) // this is a function with arguments
{
    int c= a+b;
    return c;
} */
int main()
{
    int num1, num2;
    cout<<"Enter the the numbers"<<endl;
    cin>>num1>>num2;
    // here num1 and num2 are actual parameters
    cout<<"The sum of numbers is= "<<sum(num1,num2)<<endl;  // calling func sum()
    nullfunc();                                             // calling func nullfunc()
    return 0;
}
int sum(int a, int b)
{
    // here a b are formal paramtrs, will take values from actual parameter num1 num2
    int c= a+b;  // a and b can only be use inside sum() func only
    return c;
}
void nullfunc()          //we can say it a void func, which neither take nor return any value
{
    cout<<"Hello GM"<<endl;
}