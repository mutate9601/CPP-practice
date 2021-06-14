#include<iostream>
using namespace std;
class shop
{
    int itemId[100];
    int itemPrice[100];
    public:
    int counter=0;
    void setPrice(void);
    void dispPrice(void);
};
void shop ::setPrice(void)
{
    cout<<"Enter Id of your item no "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter Pirce of your item "<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void shop ::dispPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of item with id no "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
    
}
int main()
{
    int j;
    shop kirana;
    cout<<"How many item you want ";
    cin>>j;
    for (int i = 0; i < j; i++)
    {
        kirana.setPrice();
    }
    kirana.dispPrice();
    //kirana.setPrice();
    //kirana.dispPrice();
    return 0;
}