#include<iostream>
using namespace std;
/*string evnod(int a)
{
    string b="Even";
    string c="Odd";
    if(a%2==0)
    {
        return b;
    }
    return c;
}*/
void chk(int x)
{
    if(x%2==0)
    cout<<"Even\n";
    else
    cout<<"Odd\n";
}
/*int larg(int a, int b, int c)
{
    if(a>b)
    {
        if(a>c)
        return a;
        else
        return c;   
    }
    else
    {
        if(b>c)
        return b;
        else 
        return c;   
    }
}
int small(int a, int b, int c)
{
  if(a<b)
    {
        if(a<c)
        return a;
        else
        return c;    
    }
    else
    {
        if(b<c)
        return b;
        else 
        return c;   
    }   
} */
/*float area(float r)
{
    return r*r*(3.14);
}
float circumf(float r)
{
    return r*2*(3.14);
}*/
/*
int prod(int i, int p)
{
    return p*i;
}*/
int main()
{
    int x;
    cout<<"Enter the number ";
    cin>>x;
    chk(x);
    //cout<<" Your number is "<<chk(x)<<endl;

    /*cout<<"Enter there numbers"<<endl;
    cout<<" Num 1 ";
    cin>>x;
    cout<<" Num 2 ";
    cin>>y;
    cout<<" Num 3 ";
    cin>>z;
    cout<<" The greatest is "<<larg(x,y,z)<<endl;
    cout<<" and The smaller is "<<small(x,y,z)<<endl; */

   /* float rad;
    cout<<"Enter the Radius ";
    cin>>rad;
    cout<<"The area with radius "<<rad<<" is "<<area(rad)<<endl;
    cout<<"The circumference with radii "<<rad<<" is "<<circumf(rad)<<endl; */
    /*int a,b;
    cout<<"Enter the numbers ";
    cin>>a>>b;
    cout<<"Product is "<<prod(a,b)<<endl;*/
    return 0;
}