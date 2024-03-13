// C++ Program to illustrate the use of Constructors in multilevel inheritance of your choice.

#include <iostream>
using namespace std;

// Base class
class Animal {
protected:
    string species;
public:
    Animal()
     { }

    Animal(string species) 
    {
       
        this->species = species;
    }

    void display() {
        cout << "Species: " << species << endl;
    }
};

// Intermediate class inheriting from Animal
class Mammal : public Animal {
protected:
    string habitat;
public:
    Mammal(string habitat) : Animal("Mammal") 
    {
        
        this->habitat = habitat;
    }

    void displayHabitat() 
    {
        cout << "Habitat: " << habitat << endl;
    }
};

// Derived class inheriting from Mammal
class Dog : public Mammal 
{
private:
    string breed;
public:
     Dog(string breed, string habitat) : Mammal(habitat)
     {
        
        this->breed = breed;
     }

    void displayBreed() 
    {
        cout << "Breed: " << breed << endl;
    }
};

int main() {
    Dog myDog("Labrador", "Land");
    myDog.display();
    myDog.displayHabitat();
    myDog.displayBreed();
    return 0;
}

