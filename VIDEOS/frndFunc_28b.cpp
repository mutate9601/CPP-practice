#include<iostream>
using namespace std;
class c2;
class c1
{
    int a;
    public:
    friend void swap(c1 &, c2 &);
    void setdata(int val)
    {
        a=val;
    }
    void disp(void)
    {
        cout<<a<<endl;
    }
};
class c2
{
    int b;
    public: 
    friend void swap(c1 &, c2 &);
    void setdata2(int val)
    {
        b=val;
    }
    void disp(void)
    {
        cout<<b<<endl;
    }
};
void swap(c1 & x, c2 & y)
{
    int temp=x.a;
    x.a=y.b;
    y.b=temp;
}
int main()
{
    c1 oc1;
    c2 oc2;
    oc1.setdata(25);
    oc2.setdata2(52);
    swap(oc1,oc2);
    cout<<"Value of c1 after exchange ";
    oc1.disp();
    cout<<"Value of c2 after exchange ";
    oc2.disp();

    return 0;
}