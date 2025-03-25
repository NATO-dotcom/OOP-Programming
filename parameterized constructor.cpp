#include <iostream>
using namespace std;
class animal
{
	public:
		string name,color;
		void move();
         animal();// default constructor
         animal(string m,string cr);//parameterized constructor
};
void animal::move()
{
	cout<<"animal moving..."<<endl;
}
animal::animal()
{
	cout<<"creating an animal..."<<endl;//using DC
	color="black";
	name="XYZ";
}
animal::animal(string m,string cr)
{
	cout<<"creating an animal..."<<endl;//using PC
	color=cr;
	name=m;
}
int main()
{
	animal w;//declaration of the function
	w.move();//without this the fn is still called automatically
	cout<<"color of animal="<<w.color<<endl;
	cout<<"name of animal="<<w.name<<endl;
	animal k("cow","brown");
	animal h("dog","black");
	return 0;
}