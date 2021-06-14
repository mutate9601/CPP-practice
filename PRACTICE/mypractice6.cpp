#include<iostream>
using namespace std;
void grade(int i)
{
  //  string a="AA", b="AB", c="BB", d="BC", e="CD", f="DD", g="F not first but FAIL";
    if(i>=91&&i<=100)
    cout<<"Your grade is AA"<<endl;
    if(i>=81&&i<=90)
    cout<<"Your grade is AB"<<endl;
    if(i>=71&&i<=80)
    cout<<"Your grade is BB"<<endl;
    if(i>=61&&i<=70)
    cout<<"Grade is BC"<<endl;
    if(i>=51&&i<=60)
    cout<<"Grade is CD"<<endl;
    if(i>=41&&i<=50)
    cout<<"Grade is DD"<<endl;
    if(i<=40)
    cout<<"Fail"<<endl;
/* string prime(int i)
{
    string a="It is prime";
    string b="Not a prime";
    for(int j=2; j<i; j++)
    {
        if(i%j==0)
        return b;
      //else
      //return a;   //we can return here also, and it;ll show proper result but, it function has to return
    }               //   something thats why returning out of this scope
    return a;  */
}
int main()
{
    int m;
    cout<<" Enter Your Marks out of (100) ";
    cin>>m;
    grade(m);
   /* int i;
    cout<<"Enter the Num ";
    cin>>i;
    cout<<prime(i)<<endl; */
    return 0;
}