#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Dog {
public:
    string name;
    string breed;
    int age;

    void bark()
    {
        cout << name << " says Woof!" << endl;
    }
};

class House {
public:
    string address;
    int year_built;
};

class Person {
public:
    string name;
    Dog pet;
    House home;

    void introducePet()
    {
        cout << "My dog's name is: " << pet.name << endl;
        cout << "My dog's breed: " << pet.breed << endl;
        cout << "My dog's age is: " << pet.age << endl;
        pet.bark();
    }

    void DisplayHome()
    {
        cout << "I am a resident of " << home.address << endl;
        cout << "My house was built in " << home.year_built << endl;
    }

    void changePet(Dog newPet)
    {
        cout << name << " has a new pet now!" << endl;
        pet = newPet;
        introducePet(); // Introduce the new pet
    }
};

class Neighborhood {
private:
    vector<House> houses;
    vector<Person> residents;

public:
    void addHouse(House newHouse) {
        // To add new Houses
        houses.push_back(newHouse);
    }

    // To add new residents
    void addResident(Person newResident) {
        residents.push_back(newResident);
    }

    // To Display All info
    void displayNeighborhoodInfo() {
        cout << "Neighborhood Information:" << endl;
        for (size_t i = 0; i < houses.size(); ++i) {
            cout << "House lacoated at " << houses[i].address << endl;
            cout << "Built in " << houses[i].year_built << endl;
            cout << "Owner :" << endl;
            for (size_t j = 0; j < residents.size(); ++j) {
                if (residents[j].home.address == houses[i].address) {
                    cout << residents[j].name << endl;
                }
            }
            cout << endl;
        }
    }
};

int main() {
    Neighborhood myNeighborhood;

    // Adding houses to the neighborhood
    House h1, h2, h3, h4, h5;
    h1.address = "MOQ C 23 NRC E-8 ISLAMABAD";
    h1.year_built = 1971;

    h2.address = "MOQ D 23 NRC E-8 ISLAMABAD";
    h2.year_built = 1975;

    h3.address = "MOQ E 23 NRC E-8 ISLAMABAD";
    h3.year_built = 2000;

    h4.address = "MOQ B 23 NRC E-8 ISLAMABAD";
    h4.year_built = 1971;

    h5.address = "MOQ A 23 NRC E-8 ISLAMABAD";
    h5.year_built = 1971;

    myNeighborhood.addHouse(h1);
    myNeighborhood.addHouse(h2);
    myNeighborhood.addHouse(h3);
    myNeighborhood.addHouse(h4);
    myNeighborhood.addHouse(h5);

    // Adding residents to the neighborhood
    Person r1, r2, r3, r4, r5;
    r1.name = "NAVEED ASRAF";
    r1.home = h1;

    r2.name = "MUHAMMAD SAMI SHAHID";
    r2.home = h2;

    r3.name = "DR HAFIZ ALEEM TARIQ";
    r3.home = h3;

    r4.name = "ENGR  WASEEM";
    r4.home = h4;

    r5.name = "QAMAR JAVED BAJWA ";
    r5.home = h5;

    myNeighborhood.addResident(r1);
    myNeighborhood.addResident(r2);
    myNeighborhood.addResident(r3);
    myNeighborhood.addResident(r4);
    myNeighborhood.addResident(r5);

    myNeighborhood.displayNeighborhoodInfo();

    return 0;
}
