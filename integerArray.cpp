//Desc: User enters 10 integers, stored into array, summed, and shown the value
//Auth: Raphael Wong 29/07/2018

#include<iostream>
#include<cstdlib>

#define EXIT_STATUS 0
#define ARRAY_SIZE 10

int main() {

	int num[ARRAY_SIZE], sum=0;

	std::cout << "Enter ten numbers, separated with space:";

	for (int x=0; x<ARRAY_SIZE; x++) {
		std::cin >> num[x];
		sum += num[x];
	}

	std::cout << "\nThe total value is: " << sum << std::endl;

	return EXIT_STATUS;
}
