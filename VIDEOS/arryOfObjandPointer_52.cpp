#include<iostream>
using namespace std;
class items
{
    int id;
    float price;
    public:
    void getData(int a, int b)
    {
        id=a;
        price=b;
    }
    void dispData(void)
    {
        cout<<"Item code "<<id<<endl;
        cout<<"price of this item is "<<price<<endl;
    }
};
int main()
{
    int size=2;
    // int *ptr = &size;
    // int *ptr = new int [34];

    // 1. general store item
    // 2. veggies item
    // 3. hardware item    
    int p, q;
    items *ptr= new items[size];
    items *ptrTemp= ptr;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the id and price "<<endl;
        cin>>p>>q;
        ptr->getData(p,q);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<"Item id "<<i+1<<endl;
        ptrTemp->dispData();
        ptrTemp++;
    }
    
    return 0;
}