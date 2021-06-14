#include<iostream>
using namespace std;
// this is call by value
/*void swap(int a, int b)
{
    int temp= a;
    a=b;
    b=temp;
}*/
// this is we call by reference, using pointer; means by knowing address;
/*void swapPointer(int* a, int* b)
{
    int temp= *a;  
    *a= *b;  // changin value at address a with value at address b
    *b= temp; // changin value at address b with value at temp, i,e value at addres a
}*/
//int& 
int & swapRefVar(int &a, int &b)
{
    int temp= a;
    a=b;
    b=temp;
  return a;  //this will return the value of b in the main func()
}
int main()
{
    int x=1, y=0;
    cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;

    //swap(x,y);   this will not swap th values, as the int main() preference is higher than outer func() swap

    //swapPointer(&x, &y); // this will swap

    //here we're passing the address to the pointers of other func, from where that func is retrieving the values, and swappin them in the real memory
    // in such way the values are really swappin in the background

    swapRefVar(x,y)= 789;  //this will change the value, corrosponding to return value in the above func()
    //swapRefVar(x,y);
    cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;
    return 0;
}