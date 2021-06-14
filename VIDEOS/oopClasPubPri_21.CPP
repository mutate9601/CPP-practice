#include<iostream>
using namespace std;

class Employee                 //Class declaraiton
{
    private:
        int a, b, c;           //these can only be manipulated by the function of these classes 
    public:                    // example    setData or getData() only 
        int d, e;
        void setData(int a1, int b1, int c1);       // Declaration of methods or features we can say
        void getData()
        {
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};

void Employee :: setData(int a1, int b1, int c1)   //making that declared func
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee harry;           //creating object harry of the class emoloyee
    // harry.a = 134; -->This will throw error as a is private
    harry.d = 34;
    harry.e = 89;
    harry.setData(1,2,4);    // calling those functions
    harry.getData();         // same       "     "
    return 0;
}
