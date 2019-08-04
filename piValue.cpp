// Desc: Program that itereates to find the value of pi
// Auth: Raphael Wong 01/08/2019

#include <iostream>
#include <cstdlib>
#include <math.h>

#define EXIT_STATUS 0;

int main()
{
	double denominator = 0;	//i cannot divide float for some reason
	double piVar = 1; 	//pi variable

	for (int x=0; x<50; x++)
	{

		denominator = 3 + (x * 2);

		std::cout << denominator;

		if (x%2==0)
		{
			piVar -= (1 / denominator);
			std::cout << "(Minus) \t";
		}
		else
		{
			piVar += (1 / denominator);
			std:: cout << "(Plus) \t";
		}
		std::cout << "Iteration " << x + 1 << ": " << piVar << "\tPi value: " << 4 * piVar << std::endl;
	}

	std::cout << "Final pi value after 50 iterations: " << 4 * piVar << std::endl << std::endl;

	int count = 0;	
        piVar = 1;

	// count number of iteration until pi = 3.1
        while (!((3.1 <= (piVar * 4)) && ((piVar * 4) < 3.2)))	//as long as piVar*4 does not meet within the range
        {

                denominator = 3 + (count * 2);

                std::cout << denominator;

                if (count%2==0)
                {
                        piVar -= (1 / denominator);
                        std::cout << "(Minus) \t";
                }
                else
                {
                        piVar += (1 / denominator);
                        std:: cout << "(Plus) \t";
                }
                std::cout << "Iteration " << count + 1 << ": " << piVar << "\tPi value: " << 4 * piVar << std::endl;
        	count++;
	}

	std::cout << "It takes " << count << " iterations to get 3.1" << std::endl << std::endl;

	while (!((3.14 <= (piVar * 4)) && ((piVar * 4) < 3.15)))
        {

                denominator = 3 + (count * 2);

                std::cout << denominator;

                if (count%2==0)
                {
                        piVar -= (1 / denominator);
                        std::cout << "(Minus) \t";
                }
                else
                {
                        piVar += (1 / denominator);
                        std:: cout << "(Plus) \t";
                }
                std::cout << "Iteration " << count + 1 << ": " << piVar << "\tPi value: " << 4 * piVar << std::endl;
                count++;
        }

        std::cout << "It takes " << count << " iterations to get 3.14" << std::endl << std::endl;

	while (!((3.142 <= (piVar * 4)) && ((piVar * 4) < 3.143)))
        {

                denominator = 3 + (count * 2);

                std::cout << denominator;

                if (count%2==0)
                {
                        piVar -= (1 / denominator);
                        std::cout << "(Minus) \t";
                }
                else
                {
                        piVar += (1 / denominator);
                        std:: cout << "(Plus) \t";
                }
                std::cout << "Iteration " << count + 1 << ": " << piVar << "\tPi value: " << 4 * piVar << std::endl;
                count++;
        }

        std::cout << "It takes " << count << " iterations to get 3.142" << std::endl << std::endl;



	

	return EXIT_STATUS;
}
