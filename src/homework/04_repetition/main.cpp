//write include statements
#include "repetition.h"
#include <iostream>
using std::cout;using std::cin;
//write using statements

int main() 
{
	int answer;
	int num_in_question;
	int num_in_question1;
	int num_in_question2;
	int response;

	do{
		cout<<"1 - Factorial \n2 - Greatest Common Divisor \n3 - Exit \n";
		cin>>answer;

		if(answer == 1){
			cout<<"Enter a number to find out it's factorial: ";
			cin>>num_in_question;
			cout<<factorial(num_in_question)<<"\n";
		}
		if(answer == 2){
			cout<<"Enter two numbers to find the greatest commmon factor: ";
			cin>>num_in_question1;
			cin>>num_in_question2;
			cout<<gcd(num_in_question1,num_in_question2)<<"\n";
		}
		if(answer == 3){
			cout<<"Are you sure you want to exit?\nType 1 for yes and type 2 for no: ";
			cin>>response;
			if(response == 2){
				answer = 0;
			}
		}

	}while(answer != 3);

	return 0;
}
