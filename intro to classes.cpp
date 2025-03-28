#include <iostream>
using namespace std;
class student
{
public:
	int regno;
	string stname;
	void eat(int spoon);//member fn declaration
	void speak();
	int bookroom();
};
void student::eat(int spoon)//member fn definition
{
	cout <<stname <<" eating..." << endl;
}
int student::bookroom() 
{
	return 12;
}
void student::speak()//member fn definition
{
	cout << stname <<" speaking..." << endl;
}
int main()
{
	student p;//declared an object p from the class student
	p.stname = "nato";
	p.regno=4;
    p.eat(2);
    p.speak();
    p.bookroom(
	);
	return 0;
}
