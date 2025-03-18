#include <iostream>
using namespace std;
int factR(int n);
int main()
{
	int a = 7;
	cout << "factorial=" << factR(a) << endl;
	return 0;
}
int factR(int n)
{
	if(n<2)
		return 1;
	else
       return n*factR(n-1);
}
