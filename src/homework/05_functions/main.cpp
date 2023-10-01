#include "func.h"
#include<iostream>
#include<string>
using std::cin; using std::cout; using std::string;

int main() 
{
	int choice;
	string dna_input;

	cout<<"1 - Get GC Content\n2 - Get DNA Complement\n3 - Exit\n";
	cin>>choice;

	switch(choice){
		case 1:{
			cout<<"Enter a dna string: ";
			cin>>dna_input;
			cout<<get_gc_content(dna_input);
			break;
		}
		case 2:{
			cout<<"Enter a dna string: ";
			cin>>dna_input;
			cout<<get_dna_complement(dna_input);
			break;
		}
		case 3:{
			break;
		}
	}
	return 0;
}
