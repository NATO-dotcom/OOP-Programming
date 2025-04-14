#include<iostream>
using namespace std;
class animal
{
	private:
		string aname;
		int legs, wings;
		public:
		void move();
		void move(int e);
		animal ();
		int getlegs();
};
	void animal::move()
	{
		cout<<"Animal moving anyhowly...\n";
	}
	void animal::move(int e)
	{
		cout<<"Animal moving with"<<e<<"steps...\n";
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
	int main()
	{
		animal x;
		x.move();
		x.move();
		cout <<x.getlegs()<<endl;
		return 0;
	}