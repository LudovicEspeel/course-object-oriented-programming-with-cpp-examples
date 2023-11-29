#include "Animal.h"
#include "Pet.h"
#include "Cat.h"
#include <iostream>

using namespace std;

int main()
{
    // TODO: refactor the code (in the classes) with the intention of using inheritance and polymorphism
    Animal animal("grass", 5);
    cout << animal.getString() << endl;

    Pet pet("Blub", 6, "flakes");
    cout << pet.getString() << endl;

    Cat cat("Musti", 3, "fish");
    cout << cat.getString() << endl;

    // Of course, these objects can also be created in the heap...

    // TODO: apply polymorphism...

    return 0;
}