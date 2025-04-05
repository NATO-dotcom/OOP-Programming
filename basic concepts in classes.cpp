#include<iostream>
using namespace std;
class animal// base class definition(base class animal)
{
private://access specifiers
	string aname;
	int legs;
public:
	void move();//function overloading
	void move(int e);
	void eat();	
};
class owl:public animal//derived class definition(class owl)
{
public:
	string bname;
	string color;
	int legs ,wings;
	void hoot(int n);
	
}; 
void animal:: move()//member fn definition
{
	cout<<"animal moving by flying swiftly..."<<endl;
}
void animal::eat()
{
	cout<<"animal eating..."<<endl;
}
void owl::hoot(int n)
{
	cout<<"owl hooting "<< n <<"times"<<endl;;
}
void animal:: move(int e)
{
	cout<<"animal moving "<< e <<"miles"<<endl;
}
int main()//main fn
{
    owl x;
	x.bname="owl danger";
	cout<<"name of the owl x is "<< x.bname <<endl;	
	x.color="black";
	cout<<"color of the owl x is "<< x.color <<endl;
	x.legs=2;
	cout<<"the owl x has "<< x.legs <<"legs"<<endl;
	x.hoot(10);
	x.move();
	x.move(20);
	x.eat();
	return 0;
}