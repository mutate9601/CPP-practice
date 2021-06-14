#include<iostream>
using namespace std;
struct school
{
    int rollnum;
    string name;
    int age;
};

int main()
{
    struct school stu[5];
    for (int i = 0; i<5; i++)
    {
        cout<<"Student"<<i+1<<endl;
        stu[i].rollnum =i+1;
        cout<<"Enter name ";
        cin>>stu[i].name;
        cout<<"Enter age ";
        cin>>stu[i].age;
    }
    for(int j=1; j<=5; j++)
    { 
    if(stu[j].rollnum==2)
    {
        cout<<"Roll number"<<stu[j].rollnum<<endl;
        cout<<"Name "<<stu[j].name<<endl;
        cout<<"Age "<<stu[j].age<<endl;
    }
    }
    
    return 0;   
}