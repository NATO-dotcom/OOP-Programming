#include <iostream>
using namespace std;
class circle
{	
public:
	float radius;
	float getarea();
};
float circle::getarea()
{
	float area;
	area=3.142*radius*radius;
	return area;
}
int main()
{
	circle b;
	b.radius=7;
	cout<<"area ="<< b.getarea();
	return 0;
}