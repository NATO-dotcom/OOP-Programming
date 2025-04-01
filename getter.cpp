#include <iostream>
using namespace std;
class animal
{
private://can only be accessed by member functions which should be public
	string name;
	int legs,wings;	
public:
	void move();
	void move(int e);
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
void animal::move(int e)
{
	cout<<"animal moving anyhowly "<< e <<" steps..."<<endl;
}
int main()
{
	animal x;//unction overloading
	x.move();
	x.move(20);
	cout<<"animal has "<<x.getlegs()<<" legs "<<endl;
	return 0;
}