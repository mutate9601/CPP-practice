#include <iostream>
using namespace std;
int main()
{
    struct ary
    {
        string s;
    };
    ary var[10];
    cout << "Enter 5 words " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> var[i].s;
    }
    cout << "RESULT IS HERE " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << var[i].s << endl;
    }
    return 0;
}