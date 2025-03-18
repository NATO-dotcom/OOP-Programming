#include <iostream>
using namespace std;
int main()
{
	int score[3][2];
	for(int row = 0; row < 3; row++)
		for(int col = 0; col < 2; col++)
		{
			cout << "enter score for student " << row+1<< "unit " << col+1<<":";
			cin >> score[row][col];
		}
	return 0;
}
