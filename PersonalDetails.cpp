//Desc: User enters name, age and DOB, program displays info entered
//Auth: Raphael Wong 29/07/2019

#include<cstdio>
#include<cstdlib>
#include<iostream>

#define EXIT_STATUS 0;

int main() {

	std::string fname, lname, age, dob;
	//note strings are array of char in c

	/*
	printf("Please enter your name:");
	scanf("%s", name);

	printf("\nName: %s \n", name);
	*/

	std::cout << "\nCIN Enter name: ";
	std::cin >> fname >> lname;
	//whitespace terminates input so double input allow users to enter their full name

	std::cout << "\nEnter age: ";
	std::cin >> age;

	std::cout << "\nEnter date of birth: ";
	std::cin >> dob;

	std::cout << "\nName: " << fname << " " << lname << std::endl;
	std::cout << "Age: " << age << std::endl;
	std::cout << "Date of birth: " << dob << std::endl;

	return EXIT_STATUS;
}
