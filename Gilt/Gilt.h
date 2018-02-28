#pragma 
#include "date.h"


class Gilt
{
public:
	Gilt(Date MaturityDate, double Coupon) : M_Coupon{ Coupon }, M_MaturityDate{ MaturityDate } {}
	
	double CleanPRice(double YieldToMaturity, Date Setllement);


	double YieldToMAturity(double Clean_Price, Date Setllement);
private:
	double M_Coupon;
	Date M_MaturityDate;

};

