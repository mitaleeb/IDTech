#include <iostream>
using namespace std;


void Hi () 
{
	cout<<"Hi!";
	Hi();

}

void main(){
	Hi();
}