#include<iostream>
using namespace std;
int main()
{
	int i,score[5];
	for (i=0;i<5;i++)
	{
		cout<<"enter the score of subject "<<i+1<<":";
		cin>>score[i];
	}
	cout<<endl;
	return 0;
}