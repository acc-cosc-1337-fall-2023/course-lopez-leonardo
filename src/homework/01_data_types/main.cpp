//write include statements
#include "data_types.h"
#include<iostream>
//write namespace using statement for cout
using std::cin; using std::cout;

int main()
{
	auto num = 0;

	cout << "Enter a number: ";
	cin>>num;

	auto result = 0;
	result = multiply_numbers(num);

	cout<<"Result is: " <<result<<"\n";

	auto num1 = 4;
	result = multiply_numbers(num1);

	cout<<"Result is: "<<result<<"\n";

	return 0;
}
