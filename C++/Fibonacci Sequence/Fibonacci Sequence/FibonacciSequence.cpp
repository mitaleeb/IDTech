#include <iostream>
using namespace std;

int fib (int n) {
	

	if (n<=2) {
		return 1;
	}
	else if (n==0){
		return 0;
	}
	else {
		return fib(n-1)+ fib(n-2);

	//fib(x);
	}
}

void main () 
{
	int index, x;	
	cout<< "Please enter which number in the fibonacci sequence you would like to see: \n";
	cin>>index;
	x = fib(index);
	cout << x;
	system("PAUSE");
	//int arr [index]

}