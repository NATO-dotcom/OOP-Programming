#include <iostream>
using namespace std;
int main()
{
    int score;
	cout<<"Enter score:";
	cin>>score;
	int scoreCategory;
	scoreCategory=score/10;
	switch(scoreCategory)
	{
    case 10:
	case 9:cout<<"Grade A:Excellent!";break;
	case 8:cout<<"Grade B+:Very Good!";break;
    case 7:cout<<"Grade B:Good!";break;
    case 6:cout<<"Grade C+:Above Average!";break;
	case 5:cout<<"Grade C:Fair!";break;
	case 4:cout<<"Grade D+:Below Average!";break;
	case 3:cout<<"Grade D:Poor!";break;
	case 2:
    case 1:
	case 0:cout<<"Grade E: Very Poor!";break;
	default:cout<<"Invalid score!Enter score between 0-100";break;
	}	
	return 0;
}