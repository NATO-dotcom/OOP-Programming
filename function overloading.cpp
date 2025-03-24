#include <iostream>
using namespace std;
float calcA(float r);
float calcA(float l,float w);
float calcA(float l,float w,float h);
int main()
{
	cout<<"area of square:"<<calcA(6)<<endl;
	cout<<"area of rectangle:"<<calcA(6,8)<<endl;
	cout<<"cuboid volume:"<<calcA(6,8,12)<<endl;
	return 0;
}
float calcA(float r)
{
	return 3.142*r*r;
}
float calcA(float l,float w)
{
	return l*w;
}
float calcA(float l,float w,float h)
{
	return l*w*h;
}