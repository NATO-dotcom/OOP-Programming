#include <iostream>
using namespace std;
int shout(int  &n,string &p);
int main()
{
	int a=7;
	string b="nato";
    
    cout<<"fn done"<<shout(a,b)<<endl;
    cout<<"value of a="<<a<<endl;
	return 0;
}
int shout(int &n,string &p)
{
	while(n>0)
	{
	cout<<"Hey "<<p<<"!!"<<endl;
	n--;	
	}
	return n;
}