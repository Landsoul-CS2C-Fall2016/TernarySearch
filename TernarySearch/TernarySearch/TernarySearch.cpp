// TernarySearch.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "ternarySearch.h"

int main() {
   int nums[] = { 0, 10, 20, 30, 40, 50, 60, 70, 80, 90 };
   for (int i = 0; i <= 90; i += 10) {
      if (ternarySearch(nums, i, 0, 10) != i / 10) {
         std::cout
            << "Searching for " << i << " returned index "
            << ternary_search(nums, i, 0, 10) << " instead of "
            << i / 10 << "." << std::endl;
         return 1;
      }

      // search for something that doesn't exist.
      if (ternarySearch(nums, i + 1, 0, 10) != -1) {
         std::cout
            << "Searching for " << i + 1 << " returned index "
            << ternarySearch(nums, i + 1, 0, 10) << " instead of -1."
            << std::endl;
         return 1;
      }
   }
   std::cout << "On this small example, your search algorithm seems correct.\n";
   return 0;
}