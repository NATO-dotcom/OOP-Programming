#include <iostream>
using namespace std;
int main()
{
	int a;//declared an int variable a
	int b=4;//declared an int variable b and initialised to 4
	int &c = a;//declaring a reference variable c and initialised to a
	int *p;//declare an int pointer p
	int *q=&b;//declare an int pointer q and assign it the address of b
	
	cout<<b <<"\n";
	cout<<c <<endl;
	return 0;
}