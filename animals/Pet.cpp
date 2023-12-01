#include "Pet.h"
#include <iostream>
#include <sstream>

using namespace std;

Pet::Pet(string name, int age, string food) : name(name), age(age), food(food)
{
}

Pet::~Pet()
{
    cout << "Destroying a Pet" << endl;
}

string Pet::getString() const
{
    stringstream ss;
    ss << "Pet food: " << food << ", name: " << name << ", age: " << age << " years";
    return ss.str();
}

string Pet::getSound() const
{
    return "";
}