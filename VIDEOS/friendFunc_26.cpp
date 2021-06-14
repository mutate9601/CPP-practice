#include<iostream>
using namespace std;
class complex
{
    int a, b;
    public:
    // below line means that non member -  sumnum function is allowed to  do
    //anything wiht my private parts(members)
    friend complex sumnum(complex p, complex q);
    void getData(int x, int y)
    {
        a=x;
        b=y;
    }
    void dispData()
    {
        cout<<"Your num is "<<a<<" + "<<b<<"i"<<endl; 
    }
};
complex sumnum(complex p, complex q)
{
    //cout<<a; //this will throw error explained below
    complex r;
    r.getData((p.a+q.a),(p.b+q.b));
    return r;
}
int main()
{
    complex a1,a2,a3;
    a1.getData(1,2);
    a1.dispData();

    a2.getData(3,4);
    a2.dispData();
    //a3.sumnum(a1,a2) // it is invalid, explained below
    a3=sumnum(a1,a2);
    a3.dispData();
    
    return 0;
}
/* Properties of friend functions
1.not in the scope class, it has only right to access the private data thats all
2.since it is not in the scope of the class, it cannot be called  from the object of 
that class. a3.sumnum() == Invalid
3.can be invoked without the help of any object
4.usually contains the objects as arguments
5.can be declared inside public or private section of the class
6.it cannot acceds the members directly by their names and need object_name.member_name
to access any members.
*/