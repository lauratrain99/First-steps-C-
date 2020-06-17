#include <iostream>
#include <cmath>

int main() {
  // Declare variables
  double a;
  double b;
  double c;

  // Ask the user to enter the values
  std::cout << "Enter a: ";
  std::cin >> a;
  
  std::cout << "Enter b: ";
  std::cin >> b;

  std::cout << "Enter c: ";
  std::cin >> c;

  // Declare variables for the roots
  double root1;
  double root2;

  // Define the value for the roots
  root1 = (-b + std::sqrt(std::pow(b,2) -4*a*c))/(2*a);
  root2 = (-b - std::sqrt(std::pow(b,2) -4*a*c))/(2*a);

  // display the output
  std::cout << "Root 1 is " << root1 << "\n";
  std::cout << "Root 2 is " << root2 << "\n";

  
}