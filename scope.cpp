#include <iostream>
using namespace std;//file sscope(both fn and variable)
int x = 10;//global variable
int square(int n)//inline definition of a fn i.e both declaration and def. at the same time
{
	return n * n;
}
int main(int argc, char** argv)
{
	int num;//local variable
	cout << x << endl;
	cin >> num;
	cout << square(num)<<endl;
    cout<<x *square(num)<<endl;
	return 0;
}
