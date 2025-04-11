#include <iostream>
using namespace std;
class vehicle
{
private:
     string brand;	
	
public:
	vehicle(string b)
	{
		brand=b;
		cout<<"vehicle is "<< brand <<"brand"<<endl;
	}
	float speed(int n)
	{
		cout <<"vehicle"<<brand<<"has a speed of"<<n<<"km/h"<<endl;
	}
	
};
int main()
{
	vehicle b("toyota");
	b.speed(90);
	return 0;
}