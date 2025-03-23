#include <iostream>
using namespace std;
int sum(int x,int y);
float product(int x,int y);
int main()
{
	int a,b;
	cout<<"enter a:";
	cin>>a;
	cout<<"enter b:";
	cin>>b;
	cout<<"sum="<<sum(a,b)<<endl<<"product="<<product(a,b);
	return 0;
}
int sum(int x,int y)
{
    return x+y;	
}
float product(int x,int y)
{
	return x*y;
}