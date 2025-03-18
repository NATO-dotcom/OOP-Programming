#include <iostream>
using namespace std;
int main()
{
	int score[3][2]={{34,45},{24,40},{23,43}};
	for(int row = 0; row < 3; row++)
		for(int col = 0; col < 2; col++)
		{
			cout << score[row][col];
			cout<<endl;
		}
	return 0;
}
