#include <iostream>
using namespace std;
int main()
{
	int score;
	cout<<"enter score from 0-100:";
	cin>>score;
	if(score>=90 && score<=100)
		cout<<"Grade A:Excellent!";
	else if(score>=80 && score<=89)
		cout<<"Grade B+:Very Good!"<<endl;
	else if(score>=70 && score<=79)
		cout<<"Grade B:Good!"<<endl;
	else if(score>=60 && score<=69)
		cout<<"Grade C+:Above Average!"<<endl;
    else if(score>=50 && score<=59)
		cout<<"Grade C:Fair!"<<endl;
    else if(score>=40 && score<=49)
		cout<<"Grade D+:Below Average!"<<endl;
    else if(score>=30 && score<=39)
		cout<<"Grade D:Poor!"<<endl;
    else if(score>=0 && score<=29)
		cout<<"Grade E: Very Poor!"<<endl;
	else
		cout<<"Invalid score!Enter score between 0-100"<<endl;
	return 0;
}