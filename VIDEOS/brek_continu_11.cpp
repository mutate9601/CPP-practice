#include<iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout<<i<<endl;
        if(i==2)
        {
            break;       // jaise e i=2 loop se bahar, chahe aage kitne iteration hon
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if(i==3)
        {
            continue;    // i=3 chorr k next iteration mei kud jayega
        }
        cout<<"continue wala- "<<i<<endl;
    }
    return 0;
}