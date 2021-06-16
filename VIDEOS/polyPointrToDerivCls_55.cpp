#include <iostream>
using namespace std;
class baseClass
{
public:
    int varBase;
    void display(void)
    {
        cout << "displaying base class variable varBase " << varBase << endl;
    }
};
class derivedClass : public baseClass
{
public:
    int varDerived;
    void display(void)
    {
        cout << "Displaying base class variable varBase " << varBase << endl;
        cout << "Displaying derived class variable varDerived " << varDerived << endl;
    }
};
int main()
{
    baseClass *basePointer;
    baseClass objBase;
    derivedClass objDerived;
    basePointer = &objDerived; // Pointing base class pointer to derived class
    basePointer->varBase = 34;
    // base_class_pointer->var_derived= 134; // Will throw an error
    basePointer->display();
    derivedClass *derPointer;
    derPointer = &objDerived;
    derPointer->varBase = 9999;
    derPointer->varDerived = 78;
    derPointer->display();
    return 0;
}