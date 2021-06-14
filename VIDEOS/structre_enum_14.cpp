#include<iostream>
using namespace std ;
typedef struct employee     //structure is a data type, which can contain different type of data types in it, whcih then can be used in main () func
{
    int eId;      //4byte           //by writing typedef before struct and ep at the last, we can now use "ep" at the place of struct employee in the main() func 
    char eFav;    //1byte   //total of 9 bytes are used here
    float salary; //4byte
} ep;
// for better memory management we can use union 
union identity
{
    int phnnum;      //4 b
    char name;       //1 b   //only 4 bytes are used, as we can select only one , type inside union
    float aadharnum; //4 b
};

int main()
{
    //struct employee mutate;          // mutate is a kind of variable
  /*ep mutate;                         // in place of " struct employee" we can now use "ep" or anything that is mention above
    struct employee wolverine;
    struct employee weaponx;
    mutate.eId= 100;
    mutate.eFav= 'L';
    mutate.salary=1000000;
    cout<<mutate.eFav<<endl;
    cout<<mutate.eId<<endl;
    cout<<mutate.salary<<endl;  */
    union identity id1;
  //id1.phnnum=78929;
  //id1.name='A';                        
  //cout<<id1.phnnum<<endl;              //now here we're using two data types of union, due to which we're getting garbage value as the opt
  //cout<<id1.name<<endl;                // becoz 1 value is override by 2nd one
    enum meal{breakfast, lunch, dinner}; // here we cearted a 3rd datatype in this program, " meal" which is used to just make the progam readable by 
    meal m1= lunch;    // humans behind the scene, 0,1,2,,..... values are assinged to breakfst lunch dinner respectively but we can read it like that
    cout<<breakfast<<endl;
    cout<<m1<<endl;
    cout<<meal{breakfast}<<endl;
    return 0;
}