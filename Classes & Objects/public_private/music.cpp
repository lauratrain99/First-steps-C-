#include <iostream>
#include "song.hpp"

int main() {

  Song electric_relaxation;
  electric_relaxation.add_artist("A Tribe Called Quest");
  std::cout << electric_relaxation.get_artist();
  
}