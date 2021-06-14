#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base2 ::greet();
    }
};

class B
{
public:
    void say()
    {
        cout << "Hello world" << endl;
    }
};

class D : public B
{
    int a;
    // D's new say() method will override base class's say() methodd
public:
    void say()
    {
        cout << "Hello my beautiful people" << endl;
    }
};

int main()
{
    // Ambibuity 1
    Derived d;
    d.greet();

    // Ambibuity 2
    B b;
    b.say();

    D c;
    c.say();

    return 0;
}