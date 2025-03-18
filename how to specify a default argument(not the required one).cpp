#include <iostream>
using namespace std;
int shout(int  n,string p="dinar");
int main()
{
shout(7);
	return 0;
}
int shout(int n,string p)
{
	while(n>0)
	{
	cout<<"Hey "<<p<<"!!"<<endl;
	n--;	
	}
	return 8;
}