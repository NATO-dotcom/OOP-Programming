#include <iostream>
using namespace std;
int factl(int n);
int main()
{
	int a = 7;
	cout << "factorial=" << factl(a) << endl;
	return 0;
}
int factl(int n)
{
int ans=1;
	while(n>1)
	{
		ans*=n ;
		n--;
	}
	return ans;
}
