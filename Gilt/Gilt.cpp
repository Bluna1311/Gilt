#include "Gilt.h"
#include "date.h"
#include <cmath>
using namespace std;
const long double EPSILON = 0.00000000001;
double Gilt::CleanPRice(double YieldToMaturity, Date settlement)
{
	

	
	
	double n= 0;
	Date DummyN = M_MaturityDate; // used to find the n value
	while (settlement < DummyN)
	{
		DummyN.addMonths(-6);
		n = n + 1;
	}
	n = n - 1; 
	double r = - settlement.daysDiff(DummyN); // 
	cout << r;
	system("pause");
	// fisrt Check for S
	Date Dummy1 = M_MaturityDate;
	Dummy1.addMonths(-6 * n);
	double M = settlement.daysDiff(DummyN);
	cout << M;
	//check for M
	double s = DummyN.daysDiff(Dummy1);
	cout << s;
	cout << "What coupon payment would you like to set ? ";
	cin >> M_Coupon;
	double A = (r / s) * (M_Coupon / 2);

	double pre = 1 / (1 + pow((YieldToMaturity / 2), M / s));
	double Post;
	double temp = 0;
	for (int i = 0; i <= n; i++)
	{
		temp += (M_Coupon / 2) / (1 + pow((YieldToMaturity / 2), i));
	}
	Post = temp + (100 / (1 + pow((YieldToMaturity / 2), n)));
	
	double Price_Clean = pre*Post - A ;
	cout << Price_Clean << endl;
	return Price_Clean;
}

double Gilt::YieldToMAturity(double Clean_Price, Date Setllement)
{
	double n = 0;
	Date DummyN = M_MaturityDate; // used to find the n value
	while (Setllement < DummyN)
	{
		DummyN.addMonths(-6);
		n = n + 1;
	}
	n = n - 1;
	double r = -Setllement.daysDiff(DummyN); // 
	cout << r;
	system("pause");
	// fisrt Check for S
	Date Dummy1 = M_MaturityDate;
	Dummy1.addMonths(-6 * n);
	double M = Setllement.daysDiff(DummyN);
	cout << M;
	//check for M
	double s = DummyN.daysDiff(Dummy1);
	cout << s;
	cout << "What coupon payment would you like to set ? ";
	cin >> M_Coupon;
	double A = (r / s) * (M_Coupon / 2);
	double Price = Clean_Price + A;
	// no idea what to do so using the bisection method ?
	double Left_limit = 0.000000001, right_Limit = 100000.00000000;
	double C = 0;
	while (right_Limit - Left_limit >= Price + EPSILON)
	{
		C = (Left_limit + right_Limit) / 2;
		double pre = 1 / (1 + pow((C / 2), M / s));
		double Post;
		double temp = 0;
		for (int i = 0; i <= n; i++)
		{
			temp += (M_Coupon / 2) / (1 + pow((C / 2), i));
		}
		Post = temp + (100 / (1 + pow((C / 2), n)));

		double Price_Clean_Test = pre * Post - A;
		if (Price_Clean_Test == Price)
			break;
		if (Price_Clean_Test < Price)
			return 0;
	}











}