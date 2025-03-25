#include <iostream>
using namespace std;
class animal
{
	public:
		string name,color;
		void move();
         animal();// default constructor
         animal(string m,string cr);//parameterized constructor
         animal(animal &original);
};
void animal::move()
{
	cout<<"animal moving..."<<endl;
}
animal::animal()
{
	cout<<"creating an animal...DC"<<endl;//using DC
	color="black";
	name="XYZ";
}
animal::animal(string m,string cr)
{
	cout<<"creating an animal...PC"<<endl;//using PC
	color=cr;
	name=m;
}
animal::animal(animal &original)
{
	cout<<"creating an animal...CC"<<endl;//using CC
	color=original.color;
	name=original.name;
}
int main()
{
	animal w;//declaration of the function
	w.move();//without this the fn is still called automatically
	cout<<"color of animal="<<w.color<<endl;
	cout<<"name of animal="<<w.name<<endl;
	animal k("cow","brown");
	animal h("dog","black");
	animal p(k);//using copy constructor to construct animal p
	cout<<"color of animal="<<p.color<<endl;//copies the color of k
	return 0;
}