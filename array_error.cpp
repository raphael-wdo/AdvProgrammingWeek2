#include <iostream>
#include <cstdio>
#define EXIT_SUCCESS    0

#define LENGTH          10

void printArray(int array[], int length);

int main (void) {

   int a[LENGTH] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int b[LENGTH] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};

   printArray(a, LENGTH);
   printArray(b, LENGTH * 2);

   return EXIT_SUCCESS;
}

void printArray(int array[], int length) {
   for (int i = 0; i < length; ++i) {
      printf("array[%d] = %d\n", i, array[i]);
   }
   std::cout << std::endl;
}
