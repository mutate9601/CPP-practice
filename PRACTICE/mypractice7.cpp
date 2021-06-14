#include<iostream>
using namespace std;
float percent(float a, float b, float c)
{
  float percent= (a+b+c)/3;
  return percent;
}
/*void table(int x, int y)
{
    if(y != 1)
    {
      table(x,y-1);
    }
    cout << x*y << "\n";
}*/
int main()
{
    struct marks
    {
       int rollno;
       string name;
       float chem_maks;
       float math_maks;
       float phys_maks;
    };
    struct marks stu[5];
    for (int i = 0; i < 5; i++)
    {
       cout<<"student"<<i+1<<endl;
       cout<<"roll num ";
       cin>>stu[i].rollno; 
       cout<<"enter your name ";
       cin>>stu[i].name;
       cout<<"marks in chem ";
       cin>>stu[i].chem_maks;
       cout<<"marks in maths ";
       cin>>stu[i].math_maks;
       cout<<"marks in physics ";
       cin>>stu[i].phys_maks;
       cout<<"percent is "<<percent(stu[i].chem_maks, stu[i].math_maks, stu[i].phys_maks)<<endl;             
    }
    
   /* int x;
    cout<<"Enter the number for table ";
    cin>>x;
    table(x,10);*/
    return 0;
}