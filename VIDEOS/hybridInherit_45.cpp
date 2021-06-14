#include<iostream>
using namespace std;
class student
{
    protected:
    int rollNum;
    public:
    void setRoll(int a)
    {
        rollNum=a;
    }
    void dispRoll(void)
    {
        cout<<"Your roll number is "<<rollNum<<endl;
    }
};
class test: virtual public student
{
    protected:
    float maths, phys;
    public:
    void setMarks(float a, float b)
    {
        maths=a;
        phys=b;
    }
    void dispMarks(void)
    {
        cout<<"Your result is here: "<<endl
            <<"Maths "<<maths<<endl
            <<"Physics "<<phys<<endl;
    }
};
class sports: virtual public student
{
    protected:
    float score;
    public:
    void setScore(float a)
    {
        score=a;
    }
    void dispScore(void)
    {
        cout<<"Your PT score is "<<score<<endl;
    }
};
class result: public test, public sports
{
    private:
    float total;
    public:
    void display(void)
    {
        total=maths+phys+score;
        dispRoll();
        dispMarks();
        dispScore();
        cout<<"Your total socre is "<<total<<endl;
    }
};
int main()
{
    result lalit;
    lalit.setRoll(21);
    lalit.setMarks(98, 90.98);
    lalit.setScore(9);
    lalit.display();
    return 0;
}