#include <iostream>
using namespace std;
class animal
{
private://can only be accessed by member functions which should be publice
	string name;
	int legs,wings;	
public:
	void move();
	animal();
	int getlegs();
};
void animal::move()
{
	cout<<"animal moving anyhowly..."<<endl;
}
animal::animal()
{
	name="mammal";
	legs=2;
	wings=0;
}
int animal::getlegs()
{
	return legs;
}
int main()
{
	animal x;
	x.move();
	cout<<x.getlegs()<<endl;
	return 0;
}