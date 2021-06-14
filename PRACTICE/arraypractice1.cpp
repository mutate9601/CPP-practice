#include<iostream>
using namespace std;
int main()
{

    int arr[10];
    int pos=0, neg=0, od=0, ev=0, zer=0;
    for (int i = 0; i < 10; i++)
    {
        cout<<"Enter number ";
        cin>>arr[i];
    }
    for (int i = 0; i < 10; i++)
    {
        if(arr[i]>0)
        pos++;
        if(arr[i]<0)
        neg++;
        if(arr[i]%2!=0)
        od++;
        if(arr[i]%2==0)
        ev++;
        if(arr[i]==0)
        zer++;
    }
    cout<<"number of pos "<<pos<<endl;
    cout<<"number of neg "<<neg<<endl;
    cout<<"number of odd "<<od<<endl;
    cout<<"number of even "<<ev<<endl;
    cout<<"number of zero "<<zer<<endl;
   
    
    /*cout<<" Enter num to check ";
    cin>>d;
    for (int i = 0; i < 5; i++)
    {
        if(arr[i]==d)
        {
            a=true;
            break;
        }        
    }
    if(a==true)
    cout<<"found"<<endl;
    else
    cout<<" Not found "<<endl;*/
        
    /*for (int i = 0; i < 10; i++)
    {
        cout<<"numbers are"<<arr[i]<<endl;
    }*/
    return 0;
}