#include <iostream>
using namespace std;
int main()
{
	int rows;
	cout<<"enter rows:";
	cin>>rows;
	int i=rows;
	while(i>0)
	{
    int k=1;
	while(k<=rows-i)
	{
	cout<<" ";
	k+=1;	
	}
	int j=i;
	while(j>0)
	{
	cout<<"*"<<" ";
	j-=1;	
	}
	i-=1;
	cout<<endl;	
	}
	return 0;
}