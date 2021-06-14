#include<iostream>
using namespace std;
class number
{
    int a;
    public:
    number()
    {
        a=0;
    }
    number(int num)
    {
        a=num;
    }
    // when no copy constructor is found, compiler supplies its own copy constructor
    number(number &objct)
    {
        cout<<"copy constructor called :"<<endl;
        a= objct.a;
    }
    void disp()
    {
        cout<<"The number for this object is "<< a <<endl;
    }
};
int main()
{
    number x,y,z(45),z2;
    x.disp();
    y.disp();
    z.disp();
    //there are diffent methods of invoking/callin copy consttr
    number z1(x); //copy constuctor invoked
    z1.disp(); 

    z2= z; //copy consturctor not called

    number z3= z;
    z3.disp();  //copy consturctor invoked

    //z1 should exactly resembe z or x or y
    return 0;
}