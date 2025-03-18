#include <iostream>//preprocessor commands
using namespace std;
int main()
{
	//main function
	int rows,k;
	cout << "enter number of rows:";
	cin >> rows;
	for(k = 0; k < rows; k++)
	{
		if (k==4)continue;
		cout << k << endl;
	}
		return 0;
	}
