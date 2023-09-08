#include "hwexpressions.h"

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write function code here
const double tax_rate = 6.75;

double get_sales_tax_amount(double meal_amount)
{
    double result = (meal_amount * tax_rate)/100;
    return result;
}

double get_tip_amount(double meal_amount, double tip_rate)
{
    double result = meal_amount * (tip_rate/100);
    return result;
}
