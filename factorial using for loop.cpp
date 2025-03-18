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
	int ans =1;
	for(int i=1;i<=n;i++)
		ans*=i;
    return ans;
}
