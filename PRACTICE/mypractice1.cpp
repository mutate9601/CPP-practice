#include<iostream>
using namespace std;
/*void kmtomtr(int* km)
{
    *km= *km * 1000;
}*/
void kmtomtr(int &km)
{
    km=km*1000;
}
//int percentage(float,float,float,float,float);

int main()
{
    int num1;
    cout<<"Enter distance in Km : ";
    cin>>num1;
    kmtomtr(num1);
    cout<<"distance in mtr is = "<<num1<<"mtrs"<<endl;
   /* float mar[6];
    mar[0]=0;
    for (int i = 1; i <6; i++)
    {
        cout<<"Enter marks of "<<i<<" subject: ";
        cin>>mar[i];
    }
    cout<<"your percentage is: "<<percentage(mar[5],mar[1],mar[2],mar[3],mar[4])<<"%"<<endl; */
    return 0;
}
/*
int percentage(float a, float b, float c, float d, float e)
{
    double per=(a+b+c+d+e)/5;
    return per;
} */