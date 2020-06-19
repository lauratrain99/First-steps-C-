#include <iostream>
#include <vector>

int main(){
  // Declare vars
  int sum = 0;
  int product_odd = 1;
  std::vector<int> numbers = {2, 4, 3, 6, 1, 9};
  for (int i = 0; i < numbers.size(); i++){
    sum = sum + numbers[i];
    if (numbers[i] % 2 == 1){
      product_odd = product_odd*numbers[i];
    }
  }

  std::cout << "Sum of even numbers is " << sum << "\n";
  std::cout << "Product of odd numbers is "<< product_odd << "\n";
}