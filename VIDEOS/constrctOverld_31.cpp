#include<iostream>
using namespace std;
class complex
{
    int a, b;
    public:
    complex(int x, int y)
    {
        a=x;
        b=y;
    }
    complex()
    {
        a=1;
        b=0;
    }
    complex(int x)
    {
        a=x;
        b=0;
    }
    void dispData()
    {
        cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
    }
};
int main()
{
    complex c1(2,3);
    c1.dispData();
    complex c2;
    c2.dispData();
    complex c3(10);
    c3.dispData();
    return 0;
}