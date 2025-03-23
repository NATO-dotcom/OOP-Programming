#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Enter a number a:";
		 cin >> a;
		 cout << "Enter a number b:";
		 cin >> b;
		if(a>b)
		 {
		 	cout<<"The greater number is:"<<a;
		 }
		 else if (b>a)
		 {
		 	cout<<"The greater number is:"<<b;
		 }
		 else
		 {
			 cout<<"Equal Exiting...";
		 }
		 return 0;
}
