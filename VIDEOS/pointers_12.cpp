#include<iostream>
using namespace std;
int main()
{
    int a=1;
    int* c=&a;
    int** d=&c;                //pointer to pointer
    cout<<"address value of a "<<c<<endl;
    cout<<"address value of a "<<&a<<endl;
    cout<<"address value of pointer c "<<&c<<endl;
    cout<<"address value of pointer c "<<d<<endl;
    cout<<"value stored in a "<<*c<<endl;
    cout<<"value stored in pointer c "<<*d<<endl;
    cout<<"value stored in a "<<**d<<endl;
    return 0;
}