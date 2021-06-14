#include<iostream>
using namespace std;
int main()
{

    int arr[10];
    int jrr[10];
    for (int i = 0; i < 10; i++)
    {
        cout<<"Enter number ";
        cin>>arr[i];        
    }
    int j=0;
    for (int i = 9; i>=0; i--)
    {
        jrr[j]=arr[i];
        j++;
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<jrr[i]<<endl;
    }
    return 0;
}