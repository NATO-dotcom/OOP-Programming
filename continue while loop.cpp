#include <iostream>//preprocessor commands
using namespace std;
int main()
{
	//main function
	int rows,i=0;
	cout << "enter number of rows:";
	cin>>rows;
	while(i<rows)
	{
	i+=1;
	if(i==4)continue;
	cout<<i<<endl;	
	}
			 return 0;
	}
