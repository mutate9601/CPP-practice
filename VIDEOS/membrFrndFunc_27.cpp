#include<iostream>
using namespace std;
class complex;            //forward declaration, of a class
class calculator
{
    public:
    int sum(complex, complex);    // declaring function only
    int compsum(complex, complex);
};
class complex             //declared class
{
    int a, b;
    public:
    // here we're individually declaring function as friend
    //friend int calculator:: sum(complex, complex);   //declaring frnd func of another class, in this class
    //friend int calculator:: compsum(complex, complex);   // another func of sumcomplex class
    // Alter : Declaring the entire calculator class as friend in complex class, by
    friend class calculator;
    void getData(int x, int y)
    {
        a=x;
        b=y;
    }
};
int calculator:: sum(complex o1, complex o2)         //continuing declared func of a class
{
    return (o1.a+o2.a);
}
int calculator:: compsum(complex o1, complex o2)
{
    return (o1.b+o2.b);
}
int main()
{
    complex x1, x2;
    x1.getData(100,0);
    x2.getData(9,5);
    calculator calc;
    cout<<"the sum of real part of x1 and x2 is "<<calc.sum(x1,x2)<<endl;
    cout<<"the sum of non-real part of x1 and x2 is "<<calc.compsum(x1,x2)<<endl;
    return 0;
}