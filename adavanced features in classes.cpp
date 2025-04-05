#include<iostream>
using namespace std;
class animal// base class definition(base class animal)
{
private://access specifiers
	string aname;
	int legs;
public:
	void move()//member fn definition
	{
		cout << "animal moving by flying swiftly..." << endl;
	}//function overloading
	void move(int e)
	{
		cout << "animal moving " << e << "miles" << endl;
	}
	void eat()
	{
		cout << "animal eating..." << endl;
	}
};
class owl: public animal //derived class definition(class owl)
{
public:
	string bname;
	string color;
	int legs , wings;
	void hoot(int n)
	{
		cout << "owl hooting " << n << "times" << endl;;
	}
};
int main()//main fn
{
	owl x,y,z;
	cout<<"features of owl x:"<<endl;
	x.bname = "owl danger";
	cout << "name of the owl x is " << x.bname << endl;
	x.color = "black";
	cout << "color of the owl x is " << x.color << endl;
	x.legs = 2;
	cout << "the owl x has " << x.legs << "legs" << endl;
	x.hoot(10);
	x.move();
	x.move(20);
	x.eat();
	cout<<endl;
	cout<<"features of owl y:"<<endl;
	y.bname="owl safe";
    cout << "name of the owl y is " << y.bname << endl;
    y.color = "brown";
	cout << "color of the owl y is " << y.color << endl;
	y.legs =x.legs ;
	cout << "the owl y has " << y.legs << "legs" << endl;
	y.hoot(7);
	y.move(10);
	cout<<endl;
	cout<<"features of owl z:"<<endl;
	z.bname=y.bname+x.bname;
	z.color=x.color+y.color;
	cout << "name of the owl z is " << z.bname << endl;
	cout << "color of the owl z is " << z.color << endl;
	return 0;
}
