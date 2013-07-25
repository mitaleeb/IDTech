#include <iostream>
#include <string>
using namespace std;

class Dog
{
public:

	//initializing variables

	int age;
	int weight;

	string name;
	string color;

	//initializing functions

	void bark();
	void run();

	//create constructors
	Dog();// default constructer
	Dog(int newAge, int newWeight, string newName, string newColor);

};