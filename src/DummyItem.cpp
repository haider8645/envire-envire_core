#include "DummyItem.hpp"
#include <iostream>

using namespace std;

envire::core::DummyClass::DummyClass(const int& number)
{
    id = number;
    cout << "Constructor of the Item with one argument" << endl;
}

void envire::core::DummyClass::welcome()
{
    cout << "This is a method of the class to which the template fits" << endl;
    cout << "My id is: " << id << endl;
}
int envire::core::DummyClass::getId(){
    return this -> id;
}
// Inheritance from a template fitting the DummyClass type
void envire::core::DummyItem::hello()
{
    cout << "You successfully created a class that inherited from a template. Hello!" << endl;
}

