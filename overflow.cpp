#include <iostream>

#define EXIT_SUCCESS    0

int main(void) {

   char c = 'a';
   while (c > 0) {
      c++;
      std::cout << c << std::endl;
   }

   return EXIT_SUCCESS;
}
