#include <iostream>

int main() {
  // Declare variables
  double pesos;
  double reais;
  double soles;
  double dollars;

  // Ask the user to enter the variables
  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;

  std::cout << "Enter number of Brazilean Reais: ";
  std::cin >> reais;

  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;
  
  // store the conversion rates
  double conversion_rate_pesos = 0.00027;
  double conversion_rate_reais = 0.19;
  double conversion_rate_soles = 0.29;

  // convert to USD
  dollars = (conversion_rate_pesos*pesos) + (conversion_rate_reais*reais) + (conversion_rate_soles*soles);

  // display final amount of USD
  std::cout << "US Dollars = $" << dollars;
  

}