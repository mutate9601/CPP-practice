#include<iostream>
using namespace std;
struct clg
{
    int rollnum;
    string name;
    int age;
    string address;
    int marks;
};
int main()
{
    struct clg st[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Student "<<i+1<<endl;
        cout<<"Enter roll num ";
        cin>>st[i].rollnum;
        cout<<"Enter name ";
        cin>>st[i].name;
        cout<<"Enter age ";
        cin>>st[i].age;
        cout<<"Enter address ";
        cin>>st[i].address;
        cout<<"Enter marks ";
        cin>>st[i].marks;
    }
    for(int j=0; j<5; j++)
    {
        cout<<"Roll number "<<st[j].rollnum<<endl;
        cout<<"Name "<<st[j].name<<endl;
        cout<<"Age "<<st[j].age<<endl;
        cout<<"Address "<<st[j].address<<endl;
        cout<<"Marks "<<st[j].marks<<endl;
    }
    return 0;
}