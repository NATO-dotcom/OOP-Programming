#include <iostream>
using namespace std;
class animal
{
private:
	int legs;
	void swallow();
protected:
	void makenoise();
public:
	string name, color;
	void bite();
};
void animal::bite()
{
	cout<<"animal taking a bite..."<<endl;
	swallow();//it's private
}
void animal::makenoise()
{
	cout<<"animal making noise..."<<endl;
}
void animal::swallow()
{
	cout<<"animal swallowing..."<<endl;
}
int main()
{
	animal m;
	m.name="mammal";
	m.color="black";
	m.bite();
	return 0;
}