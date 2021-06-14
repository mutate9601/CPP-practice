#include <iostream>
using namespace std;
class student
{
protected:
    int roll_num;

public:
    void getRollNum(int);
    void dispRollNum(void);
};
void student::getRollNum(int r)
{
    roll_num = r;
}
void student::dispRollNum(void)
{
    cout << "The roll num is " << roll_num << endl;
}
class exam : public student
{
protected:
    float maths;
    float phy;

public:
    void getMarks(float, float);
    void dispMarks(void);
};
void exam::getMarks(float a, float b)
{
    maths = a;
    phy = b;
}
void exam::dispMarks(void)
{
    cout << "Marks in maths " << maths << endl;
    cout << "Marks in Physics " << phy << endl;
}
class result : public exam
{
public:
    void dispResult()
    {
        dispRollNum();
        dispMarks();
        cout << "Your percentage is " << (maths + phy) / 2 << endl;
    }
};
int main()
{
     /*
    Notes: 
        If we are inheriting B from A and C from B:[ A--->B--->C ]
        1. A is the base class for B and B is the base class for C
        2. A-->B-->C is called Inheritance Path
    */
    result R1;
    R1.getMarks(99.0, 97.0);
    R1.getRollNum(21);
    R1.dispResult();
    return 0;
}