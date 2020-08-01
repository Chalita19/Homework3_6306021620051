#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int  quizz1,quizz2,quizz3 ;
	float mid, final;

	cout << "===============QUIZZES===============" << endl;
	
	cout << " Enter first quizz  (10) : " ;
	cin >> quizz1 ;
	cout << " Enter second quizz (10) : " ;
	cin >>quizz2 ;
	cout << " Enter third quizz  (10) : " ;
	cin >> quizz3 ;

	cout << "===============MID-TERM==============" << endl;
	
	cout << " Enter mid-term  (40) : " ;
	cin >>  mid ;

	cout << "================FINAL================" << endl;
	
	cout << " Enter final  (50) : " ;
	cin >> final ;

	float QuizzTotal , sum , Total ;
	sum = quizz1 + quizz2 + quizz3 ;
	QuizzTotal = sum / 3 ;
	cout << " Quizz Total : " << QuizzTotal << endl ;
	cout << " Mid term : " << mid << endl ;
	cout << " Final : " << final << endl ;

	Total = QuizzTotal + mid + final ;
	cout << " Total : " << Total << endl ;
	cout << " Your Score is " << ((Total) >= 50 ? " PASS ": " FAIL ") << endl ; 

	system("pause");
	return (0);
}