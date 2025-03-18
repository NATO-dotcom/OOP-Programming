#include <iostream>
using namespace std;
int main()
{
	int rows;
	cout<<"enter rows:";
	cin>>rows;
	int i=1;
	while(i<=rows)
	{
		int k=1;
	while(k<=rows-i)
	{
	cout<<" ";
	k+=1;	
	}
	int j=1;
	while(j<=i)
	{
	cout<<"*"<<" ";
	j+=1;	
	}
	i+=1;
	cout<<endl;	
	}
	return 0;
}