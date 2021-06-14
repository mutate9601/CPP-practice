#include<iostream>
using namespace std;
class complexnum
{
    int a, b;
    public:
    void getData(int x, int y)
    {
        a=x;
        b=y;
    }
    void sum(complexnum p, complexnum q)
    {
        a=p.a+ q.a;
        b=p.b+ q.b;        
    }
    void dispData(void)
    {
        cout<<"The sum is "<<a<<"+"<<b<<"i"<<endl;
    }
};
int main()
{
    complexnum a1, a2, a3;
    a1.getData(1,2);
    a2.getData(3,4);
    a3.sum(a1,a2);
    a3.dispData();
    return 0;
}