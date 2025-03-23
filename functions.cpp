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
	int answer=sum(a,b);
	float multiplication=product(a,b);
	cout<<"sum="<<answer<<endl<<"product="<<multiplication;
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