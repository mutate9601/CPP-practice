#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a;

    while (a > 1)
    {
        if (a % 2 == 0)
        {

            c = a / 2;
            cout << c << endl;
        }
        else if (a % 2 != 0)
        {
            c = (a * 3) + 1;
            cout << c << endl;
        }
        a = c;
    }
}
