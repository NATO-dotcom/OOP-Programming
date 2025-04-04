#include <iostream>
using namespace std;
class animal
{
private://can only be accessed by member functions which should be public
	string aname;
	int legs,wings;	
public:
	void move();
	void move(int e);
	animal();//constructor and cannot be inherited by the class bat
	int getlegs();
};
class bat:public animal
{
   string bname;
	int legs,wings;
public:
	void move();//over-riding move
};
void animal::move()
{
	cout<<"animal moving anyhowly..."<<endl;
}
void bat::move()
{
	cout<<"bat flying anyhowly..."<<endl;
}
animal::animal()
{
	aname="mammal";
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
	bat x;
	x.move();//function overloading
	
	cout<<x.getlegs()<<" legs "<<endl;
	return 0;
}