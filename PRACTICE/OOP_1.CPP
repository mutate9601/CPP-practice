#include<iostream>
using namespace std;
class Animal
{   
    private:
    string origin[3];
    public:
    string breed[10];
    int price[10];
    string dogorigin(string a[3]);
    void dispdog()
    {
        for (int i = 0; i < 10; i++)
        {
        cout<<"Dog Origin "<<origin[i]<<endl;
        cout<<"Dog breed "<<breed[i]<<endl;
        cout<<"Price "<<price[i]<<endl;     
        }
    }
};
string Animal:: dogorigin(string a[10])
{
    a[0]=origin[0];
    a[1]=origin[1];
    a[2]=origin[2];
}
int main()
{ 
    string breedcount[];
    string org[]={"IND","PAK","CHINA"};
    Animal dog;
    for (int i = 0; i < 3; i++)
    {
        cout<<org[i]<<"  ";
        if(org[i]=="IND")
        {
            for
        }
    }
    for(int i=0; i<10; i++)
    {
        cout
        cout<<"\n enter the breed name ";
        cout<<"\n enter price for each ";
        //cout<<"enter origin for each ";
        cin>>dog.breed[i];
        cin>>dog.price[i];
        //cin>>dog.orogin[i];
    }

    return 0;
}