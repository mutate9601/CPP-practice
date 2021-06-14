#include<iostream>
using namespace std;
class nam1;
class nam2
{
    int a;
    public:
    friend void add(nam2, nam1);
    void setdata(int num1)
    {
        a=num1;
    }
};
class nam1
{
    int b;
    public: 
    friend void add(nam2, nam1);
    void setdata(int num2)
    {
        b=num2;
    }
};
void add(nam2 o1, nam1 o2)
{
    cout<<"the sum is "<<(o1.a+o2.b)<<endl;
}
int main()
{
    nam1 x;
    x.setdata(23);
    nam2 y;
    y.setdata(23);
    add(y,x);
    return 0;
}