#include <iostream>

int main() {
  //declare variables
  int year;
  bool is_valid = true;
  bool leap_year = false;

  // year as input
  std::cout << "Enter a year: ";
  std::cin >> year;
  
  // check four digits
  if (year < 999 or year > 10000){
    std::cout << "The year should have four digits\n";
    is_valid = false;
  }
  
  // check if a leap year
  if (year % 4 == 0){
    if (!(year % 100 == 0 and year % 400 != 0)){
      leap_year = true;
    }
  else if (year % 400){
    leap_year = true;
  }
  }

  // print results
  if (leap_year){
    std::cout << "The year is leap\n";
  }
  else{
    std::cout << "The year is not leap\n";
  }
}