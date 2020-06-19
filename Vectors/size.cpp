#include <iostream>
#include <vector>

int main() {
  
  std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};
    
  // Add more 
  grocery.push_back("Paprika");
  grocery.push_back("Campesinas");

  std::cout << grocery.size();
  
  
  
  
}