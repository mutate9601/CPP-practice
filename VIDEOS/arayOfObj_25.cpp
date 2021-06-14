#include<iostream>
using namespace std;
class employee
{
    int id;
    public:
    void getData(void);
    void dispData(void);
};
void employee ::getData(void)
{
    cout<<"Enter id ";
    cin>>id;
}
void employee ::dispData(void)
{
    cout<<"Employee Id is "<<id<<endl;
}
int main()
{ 
    int j;
    cout<<"how many data you want to feed ? ";
    cin>>j;
    employee emp[j];   //here making array of a class object 
    for (int i = 0; i < j; i++)
    {
        emp[i].getData();
        emp[i].dispData();
    }
    
    return 0;
}