#include <iostream>
using namespace std;
class animal
{
private:
protected:	
public:	
	string color;
	void move();
};
class mammal:public animal
{	
public:
	void suckle();	
};
class bird:public animal
{	
public:	
	void fly();
};
class bat:public bird,public mammal
{	
public:	
	int size;
};
void animal::move()
{
	cout<<"animal moving..."<<endl;
}
void mammal::suckle()
{
	cout<<"suckling"<<endl;
}
void bird::fly()
{
	cout<<"flying"<<endl;
}
int main()
{
	bat a;
	a.move();
	return 0;
}