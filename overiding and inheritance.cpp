#include <iostream>
using namespace std;
class animal
{
private:
	string name;
	int legs;
public:
	animal(string n, int l)
	{
		name = n;
		legs = l;
		cout << name << " has " << legs << " legs" << endl;
	}
	void eat()

	{
		cout << "eating..." << endl;
	}
	void eat(string f)
	{
		cout << "eating" << f << endl;
	}
};
class dog: public animal
{
public:
	dog(string n, int l) : animal(n, l)
	{
	
	}
	void bark()
	{
		cout << "barking..." << endl;
	}
	void eat()
	{
		cout << "dog eating..." << endl;
	}
};
int main()
{
	dog m("buddy", 4);
	m.bark();
	m.eat();
	return 0;
}
