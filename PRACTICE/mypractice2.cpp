#include<iostream>
#include<stdio.h>
using namespace std;
struct scl
{
    int rollnum;
    string name;
    int age;
    int totalmarks;
};
int  main()
{
    struct scl stu1={21,"hariya",21,250};                //first method
    cout<<stu1.age<<stu1.name<<stu1.rollnum<<stu1.totalmarks<<endl;
    struct scl stu12;
    stu12.age=20;                                        //second method
    stu12.name= "Sariya";
    stu12.rollnum=21;
    stu12.totalmarks=250;
    cout<<stu12.age<<stu12.name<<stu12.rollnum<<stu12.totalmarks<<endl;
    return 0;
}