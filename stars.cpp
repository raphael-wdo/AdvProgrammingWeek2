//Desc: Printing multiple stars in multiple patterns using for statements
//Auth: Raphael Wong

#include <cstdio>
#include <cstdlib>

#define EXIT_STATUS 0;

void printStars(int rowCondition, int colCondition1, int colCondition2, char char1, char char2);

int main() {

	//PATTERN 1
	for (int row=0; row<6; row++) {
		for (int col=0; col<row+1; col++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	//PATTERN 2
	for (int row=0; row<6; row++) {
		for (int col=0; col<6-row; col++) {
			printf(" ");
		}
		for (int col=0; col<row+1; col++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	//PATTERN 3
	for (int row=0; row<6; row++) {
		for (int col=0; col<6-row; col++) {
			printf(" ");
		}
		for (int col=0; col<row*2+1; col++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	//PATTERN 4
	for (int row=0; row<6; row++) {
		for (int col=0; col<6-row; col++) {
			printf(" ");
		}
		for (int col=0; col<row*2+1; col++) {
			printf("*");
		}
		printf("\n");
	}
	for (int row=0; row<6; row++) {
		for (int col=0; col<row+2; col++) {
			printf(" ");
		}
		for (int col=0; col<9-row*2; col++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	//PATTERN 5
	for(int row=0; row<5; row++) {
		for(int x=0; x<10; x++) {
			printf("* ");
		}
		printf("\n");

		if (row<4) {
			for(int x=0; x<9; x++) {
				printf(" *");
			}
			printf("\n");
		}
	}
	printf("\n");

	//PATTERN 1 
	printStars(6, 7, 0, '*', ' ');

	return EXIT_STATUS;
}


void printStars(int rowCondition, int colCondition1, int colCondition2, char char1, char char2)
{
	
	for (int row=0; row<rowCondition; row++) {
                for (int col=0; col<colCondition1; col++) {
                        printf(" ");
                }
                for (int col=0; col<colCondition2; col++) {
                        printf("*");
                }
                printf("\n");
        }
  
}
