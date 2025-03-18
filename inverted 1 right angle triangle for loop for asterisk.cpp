#include <iostream>
using namespace std;
int main()
{
	int i,j,rows;
	cout<<"enter rows:";
	cin>>rows;
	for(i=rows;i>0;i--)
	{
		for(j=1;j<=i;j++)
		{
		cout<<"*"<<" ";	
		}
		cout<<endl;	
	}
	return 0;
}
