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
         animal(animal &or2,animal &or3);
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
animal::animal(animal &or2,animal &or3)
{
	cout<<"creating an animal...CC"<<endl;//using CC
	color=or2.color+or3.color;
	name=or2.name+or3.name;
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
	animal x(k,h);
	cout<<"color of animal p="<<p.color<<endl;//copies the color of k
	cout<<"color of animal x="<<x.color<<endl;//mixed color of k & h
	cout<<"name of animal x="<<x.name<<endl;
	return 0;
}