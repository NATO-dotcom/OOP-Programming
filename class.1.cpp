#include <iostream>
using namespace std;
class animal
{
private:
	void fly();
protected:
	void suckle();
public:
	void move();
	void eat();	
};
void animal::fly()
{
	cout<<"animal flying..."<<endl;
}
void animal::suckle()
{
	cout<<"animal suckling..."<<endl;
}
void  animal::move()
{
	cout<<"animal moving..."<<endl;
}
void  animal:: eat()
{
	cout<<"animal eating..."<<endl;
}

int main()
{
	animal p;
	p.move();
	p.eat();
	return 0;
}