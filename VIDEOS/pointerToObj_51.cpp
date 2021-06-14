#include<iostream>
using namespace std;
class complex
{
    int real, img;
    public:
    void getData(int a, int b)
    {
        real=a;
        img=b;
    }
    void dispData(void)
    {
        cout<<"The real part is "<<real<<endl;
        cout<<"The imaginary part is "<<img<<endl;
    }
};
int main()
{
    // Complex c1;
    // Complex *ptr = &c1;
    complex *ptr = new complex;
    // (*ptr).setData(1, 54); is exactly same as
    ptr->getData(1, 54);

    // (*ptr).getData(); is as good as 
    ptr->dispData(); 


    // Array of Objects
    complex *ptr1 = new complex[4]; 
    ptr1->getData(1, 4); 
    ptr1->dispData();
    return 0;
}