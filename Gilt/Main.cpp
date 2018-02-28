#include <iostream>
#include "calendar.h"
#include"date.h"
#include"error.h"
#include"Gilt.h"

using namespace std;

int main() 
{
	unsigned int D;
	unsigned int M;
	unsigned int Y;
	cout << " year of expire" << endl;
	cin >> Y;
	cout << " months of expire" << endl;
	cin >> M;
	cout << " day of expire " << endl;
	cin >> D;
	double Coupon;
	cout << " value of anual Coupon" << endl;
	cin >> Coupon;
	Date MaturityDate(D,M,Y);
	Gilt Bond(MaturityDate, Coupon);
	double YieldToMaturity = 1;
	cout << "Test date" << endl;
	double D_, M_, Y_;
	cin >> D_ >> M_ >> Y_;
	Date Setllement(D_, M_, Y_);
	double Test = Bond.CleanPRice(YieldToMaturity , Setllement);
	cout << Test;
	system("Pause");
	return 0;

}


