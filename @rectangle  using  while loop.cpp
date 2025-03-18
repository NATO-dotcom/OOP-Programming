#include <iostream>
using namespace std;
int main()
{
	int rows=5;
	int cols=6;
	int i=0;	
	while(i<rows)
	{
	int j=0;
	while(j<cols)
	{
	cout<<"@"<<" ";
	j++;	
	}
	i++;
	cout<<endl;	
	}
	cout<<endl;
	return 0;
}