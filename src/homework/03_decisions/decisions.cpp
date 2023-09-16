//write include statement for decisions header
#include "decisions.h"
#include<iostream>
using std::cout;using std::cin;using std::string;

//Write code for function(s) code here
string get_letter_grade_using_if(int grade){
    string result = "Error";
    if(grade < 60){
        result = "F";
        return result;
    }else if(grade < 70){
        result = "D";
        return result;
    }else if(grade < 80){
        result = "C";
        return result;
    }else if(grade < 90){
        result = "B";
        return result;
    }else if(grade < 101){
        result = "A";
        return result;
    }else if(grade < 0 || grade > 100){
        result = "Invalid input";
    }
    return result;
}

string get_letter_grade_using_switch(int grade){
    string result = "Error";
    switch (grade){
        case 0 ... 59:{
            result = "F";
            return result;
            break;
        }
        case 60 ... 69:{
            result = "D";
            return result;
            break;
        }
        case 70 ... 79:{
            result = "C";
            return result;
            break;
        }
        case 80 ... 89:{
            result = "B";
            return result;
            break;
        }
        case 90 ... 100:{
            result = "A";
            return result;
            break;
        }
    }
    return result;
}
void run_menu(){
    int choice = 0;
    int num_grade = 0;
    string letter_grade ="Error";
    cout<<"MAIN MENU \n 1-Letter grade using if \n 2-Letter grade using switch \n 3-Exit \n";
	cin>>choice;
	if(choice == 1 || choice == 2){
		cout<<"Enter number grade: ";
		cin>>num_grade;
	}

    switch(choice){
		case 1:{
			letter_grade = get_letter_grade_using_if(num_grade);
            cout<<letter_grade<<"\n";
			break;
		}
		case 2:{
			letter_grade = get_letter_grade_using_switch(num_grade);
            cout<<letter_grade<<"\n";
			break;
		}
		case 3:{
			break;
		}
	}
}