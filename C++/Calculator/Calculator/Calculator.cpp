#include <iostream>
#include <string>
using namespace std;

int add (int x, int y) {
return x+y;
}

int subtract (int x, int y) {
return x-y;
}

int multiply (int x, int y) {
return x*y;
}

int divide (int x, int y) {
return x/y;
}

void main ()
{
	//Initializing Integers
	int x;
	int y; 
	char ans;
	char repeat;

	do {
	//Entering Integers from user input
	cout<< "Please enter an integer: \n";
	cin>>x ;
	cout<< "Please enter another integer: \n";
	cin>>y ;

	//system("PAUSE");
	//Asking for operation
	cout<< "What Operation would you like to use: D for Division \n M for Multiplication \n A for Addition \n S for Subtraction \n";
	cin>>ans;
	

	

		if (ans=='a' || ans=='A')
		{
		cout<< "Your answer is:  "<< add(x,y)<<endl;
		system("PAUSE");
		}

		else if (ans=='s' || ans=='S'){
		cout<< "Your answer is:  "<< subtract(x,y)<<endl;
		system("PAUSE");
		}

		else if (ans=='m' || ans=='M') {
		cout<< "Your answer is: "<< multiply(x,y)<<endl;
		system("PAUSE");
		}

		else if (ans=='d' || ans=='D') {
		cout<< "Your answer is:"<< divide(x,y)<<endl;
		system("PAUSE");
		}

		else {
			cout<< "Sorry you entered an invalid operator" ;
			system("PAUSE");
		}

cout<< "Would you like to play again? \n Y for Yes \n N for no \n";
system("PAUSE");
cin>>repeat;



}
while (repeat=='Y' || repeat=='y');

}