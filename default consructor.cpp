#include <iostream>
using namespace std;
class animal
{
	public:
		string name,color;
		void move();
         animal();// default constructor
};
void animal::move()
{
	cout<<"animal moving..."<<endl;
}
animal::animal()
{
	cout<<"creating an animal..."<<endl;
	color="black";
	name="XYZ";
}
int main()
{
	animal w;//declaration of the function
	w.move();//without this the fn is still called automatically
	cout<<"color of animaL="<<w.color<<endl;
	cout<<"name of animaL="<<w.name<<endl;
	return 0;
}