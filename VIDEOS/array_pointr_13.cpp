#include<iostream>
using namespace std;
int main()
{
    int marks[]={56, 65, 43, 65, 89}, j=0 ;
   /* cout<<marks[0]<<endl;
    marks[3]=999;         //we can change the value of an arrary element
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;  
    for (int j = 0; j <5; j++)
    {
        cout<<"marks in "<<j<<"= "<<marks[j]<< endl;
    }  
    while(j<5)
    {
        cout<<"marks in "<<j<<"= "<<marks[j]<< endl;
        j++;
    }  
    do
    {
        cout<<"marks in "<<j<<"= "<<marks[j]<< endl;
        j++;
    } while (j<5);  */
    // Pointers Arrayss
    int* p=marks;
    // cout<<&p;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
   /* cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl; 
    cout<<*(p+4)<<endl;  */
    char names[]={'h', 'c', 'm', 'c'};  //char array
    for (int i = 0; i < 4; i++)
    {
        cout<<names[i]<<endl;
    }
    return 0;
}