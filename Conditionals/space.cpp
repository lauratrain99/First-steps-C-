#include <iostream>

int main() {
  
  // ask earth weight
  double earth_weight;
  std::cout << "Enter Earth Weight: ";
  std::cin >> earth_weight;

  // ask number of planet
  int number_planet;
  std::cout << "Enter planet number: ";
  std::cin >> number_planet;

  // declare relative gravity
  double relative_grav;

  // associate decision with relative gravity
  switch (number_planet){
    case 1:
      std::cout << "Venus\n";
      relative_grav = 0.78;
    case 2:
      std::cout << "Mars\n";
      relative_grav = 0.39;
    case 3:
      std::cout << "Jupiter\n";
      relative_grav = 2.65;
      break;
    case 4:
      std::cout << "Saturn\n";
      relative_grav = 1.17;
    case 5:
      std::cout << "Uranus\n";
      relative_grav = 1.05;
    case 6:
      std::cout << "Neptune\n";
      relative_grav = 1.23;
    
    // get weight on the planet
    double weight_planet = earth_weight*relative_grav;
    std::cout << "The weight of the planet is " << weight_planet;
    

  }
  
  
  
  
  
  
  
  
  
}