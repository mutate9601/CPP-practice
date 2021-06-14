#include<iostream>
using namespace std;
int circumference(int r, const int x, const int pie=3.14)   // CONSTANT ARGUMENT
{
    //now in above arguments we've passed a constant argument whose value cant be changed here, in this func
    // x=r+pie;  //here in this line im getting ERROR becoz im trying to modify the value of const x..
    // pie=x+r;   //here too
    return x;
}
int interest(int a, float b=1.04)   // DEFAULT ARGUMENT
{                                   //it should be at the right cornor always, it can be modified
    return a*b;
}
/*inline int product(int a, int b)  // INLINE FUNCTION    
{                      //its not a good practice to use inline func, when the func have static variabl or loops or any completions
   // static int c=0;  //this executes only once
   // c++;             // next time this func runs, the value of c will be retained
    return a*b;        //but here in one line returns we can use it
}*/
int main()
{
    //int x, y;
    //cout<<"enter digits ";
    //cin>>x>>y;
    //cout<<"Product is "<<product(x,y)<<endl;
      //  cout<<"Product is "<<product(x,y)<<endl;
        //    cout<<"Product is "<<product(x,y)<<endl;
          //      cout<<"Product is "<<product(x,y)<<endl;
            //        cout<<"Product is "<<product(x,y)<<endl;
    int a=1, b=2, c=3;
    cout<<circumference(a,b,c); // so here in main() func we are providing the values. which cant be changed in any other func
    int money;
    cout<<"Enter Amount : ";
    cin>>money;
    cout<<"You will recieve Rs"<<interest(money)<<" if your'e a general employee,"<<" and vip will recieve: Rs"<<interest(money,1.1)<<endl;  
    return 0;                                             //here in above line we modified default argument with 1.1........^
}