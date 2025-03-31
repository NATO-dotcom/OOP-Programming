#include <iostream>
using namespace std;
class Add
{
	int x,y,z;
public:
	void getdata()
	{
		cout<<"enter two numbers:"<<endl;
		cin>>x>>y;
    }
    void calculate(void);
    void display(void);
};  
void Add::calculate()
{
	z=x+y;
}
void Add::display()
{
	cout<<"sum is:"<< z ;
}
int main()
{
	Add ax;
	ax.getdata();
	ax.calculate();
	ax.display();
	return 0;
}