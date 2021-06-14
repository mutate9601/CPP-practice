#include <iostream>
using namespace std;
int main()
{
    /*int b=4;
    int *a=&b;
    int **c=&a;
    cout<<"Value at b   "<<*a<<endl;    // 1
    cout<<"Address of b "<<a<<endl;     // 2
    cout<<"Address of a "<<c<<endl;     // 3
    cout<<"Address of b "<<*c<<endl;    // 4
    cout<<"Value at b   "<<**c<<endl;   // 5
    cout<<"Address of c "<<&c<<endl;    // 6 */
    //here is the new operator
    float *p = new float(40.89);
    cout << "The value at p is " << *p << endl;

    int *arr = new int[3];
    arr[0] = 10;
    *(arr + 1) = 20;
    arr[2] = 30;
    //here is the delete operator
    delete[] arr;
    for (int i = 0; i < 3; i++)
    {
        cout << "the value of arr["<<i<<"] " << arr[i] << endl;
    }

    return 0;
}