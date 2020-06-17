#include <iostream>

int main() {
  /* Declare and initialize the dog age
  It should be larger than 2.*/
  int dog_age = 10;

  // Declare year variables
  int early_years;
  int later_years;
  int human_years;

  // Assign early_years a value of 21
  early_years = 21;

  // Each following year counts as 4 human years
  later_years = (dog_age-2)*4;

  // add early_years and later_years
  human_years = early_years + later_years;

  // display results
  std::cout << "My name is Toby! Ruff ruff, I am " << human_years << " years old in human years.";
  
}