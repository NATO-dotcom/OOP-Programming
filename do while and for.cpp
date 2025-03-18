#include <iostream>//preprocessor commands
using namespace std;
int main()
{
	//main function
	int rows, i = 0,k;
	cout << "enter number of rows:";
	cin >> rows;
	do
	{
		i += 1;
		cout << i << endl;
	}
	while(i < rows);
	for(k = 0; k < rows; k++)
	{
		cout << k << endl;
	}
		return 0;
	}
