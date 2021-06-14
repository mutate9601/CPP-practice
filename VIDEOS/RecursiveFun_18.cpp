#include<iostream>
using namespace std;
int fib(int s)
{
    if(s<=1)
    {
        return 1;
    }
    return fib(s-2)+fib(s-1);
}
//--------------RECURSION------------
/*int fact(int n)
{    
    if(n<=1)
    {
        return 1;
    }
    else
    return n*fact(n-1);   //here function calling itself
} // it will work like for ex fact(4)
//fact(4)=4*fact(3);
//fact(4)=4*3*fact(2);
//fact(4)=4*3*2*fact(1);
//fact(4)=4*3*2*1;      //here condition met n=1, so it will return 1 to the same func for now;
// after that it will return the else value to the main() func.. but if initially the valu of n<=1 then it will return 1 to the main() func */
int main()
{
    /*int f;
    cout<<"Enter number : ";
    cin>>f;
    cout<<"Factorial of "<<f<<" is "<<fact(f)<<endl; */
    int a;
    cout<<"Enter the term of fibonacci series: ";
    cin>>a;
    cout<<"The "<<a<<" term of fibncai series is "<<fib(a)<<endl;
    return 0;
}