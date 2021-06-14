#include<iostream>
using namespace std;
class employee
{
    int id;
    static int count;   //static variable
    public:
    void setData(void);
    void dispData(void);
    static void getcount(void);
};
// Count is the static data member of class Employee
int employee::count;   // its default value is 0
void employee ::setData(void)
{
    cout<<"Enter the Employee id ";
    cin>>id;
    count++;
}
void employee ::dispData(void)
{
    cout<<"Id of emoployee no "<<count<<" is "<<id<<endl;
}
void employee ::getcount(void)
{
    // we can only declare static variables in static function
    //cout<<id; //it will throw error, as it is not a static member of the class,
    cout<<" the count value is "<<count<<endl;
}
int main()
{
    employee emp1, emp2, emp3;
    emp1.setData();
    emp1.dispData();
    employee::getcount();

    emp2.setData();
    emp2.dispData();
    employee::getcount();
    
    emp3.setData();
    emp3.dispData();
    employee::getcount();

    return 0;
}