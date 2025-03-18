#include <iostream>
using namespace std;
int main()
{
	int i,j,k,rows;
	cout<<"enter rows:";
	cin>>rows;
	for(i=1;i<=rows;i++)
	{
		for(k=1;k<=rows-i;k++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<"*"<<" ";
		}
		cout<<endl;	
	}
	return 0;
}