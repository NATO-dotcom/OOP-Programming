#include <iostream>
using namespace std;
int shout(const int  &n,string &p);
int main()
{
	int a=7;
	string b="nato";
    
    cout<<"fn done"<<shout(a,b)<<endl;
    cout<<"value of a="<<a<<endl;
	return 0;
}
int shout(const int &n,string &p)
{
	for(int i=0;i<n;i++)
	{
	cout<<"Hey "<<p<<"!!"<<endl;	
	}
	return n;
}