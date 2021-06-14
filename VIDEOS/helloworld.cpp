#include<iostream>
#include<iomanip>
#include<cstdio>
#include"this.h"  // that is how we create owr own header files, we need to create this.h file in the current directory
using namespace std;
int a=11111;
void neew()
{
    int a=11;
 /*   float p= 999.9f;            // we can mention it, becoz by default its a double type variable
    long double q= 99.99l;
    float &r=p;       //reference variable, p and q are same, value of p will remain same all the time, but we can use it anywhere in a varaible
  //  cout<< a<<"\n";
  // cout<<p<<endl<<q<<endl;
    cout<<int(q)<<endl;  // here we are doin typecasting in c++
    cout<< r<<endl;
    cout<<sizeof(9L)<<endl;
    cout<<sizeof(9)<<endl;
    cout<<sizeof(9.0f)<<endl;*/
}
int main()
{
    int a= 111;
    int b=54;
    bool it=true;
    // cout<<"Hello World  ";
    //cout<<(!(a==b))<<endl;
    neew();
    cout<< a<<endl<<it<<it<<it<<it<<endl;
    //cout<<::a;    // this is how we print global variable
    return 0;
}