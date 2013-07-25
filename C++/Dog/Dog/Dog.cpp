#include "dog.h"

Dog :: Dog () { // The default constructer, Dog, of the Dog class. 
	age=5;
	weight = 75;
	name = "Spikes";
	color = "brown";
}

Dog:: Dog(int newAge, int newWeight, string newName, string newColor) 
{
name = newName;
age = newAge;
color = newColor;
weight = newWeight;
}

void Dog:: bark () {
	weight-=2;
}

void Dog::run () {
	weight-=5;
}
