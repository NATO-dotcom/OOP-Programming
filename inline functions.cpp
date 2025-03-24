#include<iostream>
using namespace std;
inline int multiply(int a,int b);
int main()
{
	int x,y;
	cout<<"enter the numbers:"<<endl;
	cin>>x>>y;
	cout<<"the product of "<< x <<" and "<< y <<" is "<<multiply(x,y)<<endl;
	return 0;
}
inline int multiply(int a,int b)
{
	return a*b;
}