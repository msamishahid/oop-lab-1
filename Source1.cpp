#include<iostream>
#include<string>
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

class house {
public:
	string address;
	int house_built_year;
};

class Person {
public:
	string name;
	int age;
	Dog pet;
	house home;

	void introducePet()
	{
		cout << "My dog's name is:" << pet.name << endl;
		cout << "My dog's breed : " << pet.breed << endl;
		cout << "My dog's age  is:" << pet.age << endl;
		pet.bark();
	}

	void DisplayHome()
	{
		cout << "I am residence of " << home.address << endl;
		cout << "my house was built in " << home.house_built_year << endl;
	}
	void changePet(Dog newPet)
	{
		cout << name << " has a new pet now!" << endl;
		pet = newPet;
		introducePet(); // Introduce the new pet
	}
};
int main() {
	Person person1, person2;

	// person 1 information
	person1.name = "Muhammad Sami Shahid";
	person1.age = 19;
	person1.pet.name = "luna";
	person1.pet.breed = "sebarian husky";
	person1.pet.age = 2;
	person1.home.address = "ghouri town";
	person1.home.house_built_year = 1985;

	cout << "person1 Biodata. \n";
	cout << "I am " << person1.name << endl
		<< "my age is " << person1.age << endl;
	person1.DisplayHome();
	person1.introducePet();
	cout << endl;

	// Changing person1's pet
	Dog newPet;
	newPet.name = "Max";
	newPet.breed = "Labrador Retriever";
	newPet.age = 3;
	person1.changePet(newPet);

	cout << "*********************" << endl;

	// person 2 information
	person2.name = "Hammad Shahid";
	person2.age = 21;
	person2.pet.name = "Max";
	person2.pet.breed = " Labrador Retriever ";
	person2.pet.age = 4;
	person2.home.address = "Islamabad";
	person2.home.house_built_year = 2006;

	cout << "person2 Biodata. \n";
	cout << "I am " << person2.name << endl
		<< "my age is " << person2.age << endl;
	person2.DisplayHome();
	person2.introducePet();
	cout << endl;
	// Changing person2's pet
	Dog newPet1;
	newPet1.name = "Charlie";
	newPet1.breed = " Beagle";
	newPet1.age = 1;
	person2.changePet(newPet1);

	cout << "*********************" << endl;
	cout << "****** WE LOVE DOGS******";
	return 0;
}

