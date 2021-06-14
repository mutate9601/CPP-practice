#include <iostream>
using namespace std;
/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/

class base1
{
    int data1;

public:
    base1(int a)
    {
        data1 = a;
        cout << "Base1 class constructor called " << endl;
    }
    void dispBase1(void)
    {
        cout << "The value of data1 " << data1 << endl;
    }
};
class base2
{
    int data2;

public:
    base2(int a)
    {
        data2 = a;
        cout << "Base2 class constructor called " << endl;
    }
    void dispBase2(void)
    {
        cout << "The value of data2 " << data2 << endl;
    }
};
class derived : public base1, public base2
{
    int data3, data4;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        data3 = c;
        data4 = d;
        cout << "Derived class constructor called " << endl;
    }
    void dispDerived(void)
    {
        cout << "The value of data3 " << data3 << endl;
        cout << "The value of data4 " << data4 << endl;
    }
};
int main()
{
    derived lol(1, 2, 3, 4);
    lol.dispBase1();
    lol.dispBase2();
    lol.dispDerived();
    return 0;
}