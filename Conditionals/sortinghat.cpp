#include <iostream>

int main(){
  // Declare and initialize variables
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;
  int answer1;
  int answer2;
  int answer3;
  int answer4;

  // initial message
  std::cout << "The Sorting Hat Quiz!\n";

  //first question
  std::cout << "Q1) When I'm dead, I want people to\nremember me as: \n\n  1) The Good\n  2) The Great\n  3) The Wise\n  4) The Bold\n";
  std::cin >> answer1;

  // decision
  if (answer1==1){
    hufflepuff = hufflepuff + 1;
  }
  else if (answer1==2){
    slytherin = slytherin + 1;
  }
  else if (answer1==3){
    ravenclaw = ravenclaw + 1;
  }
  else if (answer1==4){
    gryffindor = gryffindor + 1;
  }
  else{
    std::cout << "Invalid input.\n";
  }

  //second question
  std::cout << "Q2) Dawn or Dusk?\n\n   1) Dawn\n   2) Dusk\n";
  std::cin >> answer2;

  // decision
  if (answer2==1){
    gryffindor = gryffindor + 1;
    ravenclaw = ravenclaw + 1;
  }
  else if (answer2==2){
    hufflepuff = hufflepuff + 1;
    slytherin = slytherin + 1;
  }
  else {
    std::cout << "Invalid input\n";
  }

  // question three
  std::cout << "Q3) Whick kind of instrument most\npleases your ear?: \n\n  1) The violin\n  2) The trumpet\n  3) The piano\n  4) The drum\n";
  std::cin >> answer3;

  // decision
  if (answer3==1){
    slytherin = slytherin + 1;
  }
  else if (answer3==2){
    hufflepuff = hufflepuff + 1;
  }
  else if (answer3==3){
    ravenclaw = ravenclaw + 1;
  }
  else if (answer3==4){
    gryffindor = gryffindor + 1;
  }
  else{
    std::cout << "Invalid input.\n";
  }

  // question four
  std::cout << "Q4) Whick road tempts you most?: \n\n  1) The wide, sunny grassy lane\n  2) The narrow, dark, lantern-lit\nalley\n  3) The twisting, leaf-strewn path\nthrough woods\n  4) The cobbled street lined\n(ancient buildings)\n";
  std::cin >> answer4;

  // decision
  if (answer4==1){
    hufflepuff = hufflepuff + 1;
  }
  else if (answer3==2){
    slytherin = slytherin + 1;
  }
  else if (answer3==3){
    gryffindor = gryffindor + 1;
  }
  else if (answer3==4){
    ravenclaw = ravenclaw + 1;
  }
  else{
    std::cout << "Invalid input.\n";
  }

  // result, find maximum
  int max = 0;
  std::string house;

  if (gryffindor > max){
    max = gryffindor;
    house = "Gryffindor";
  }
  if (hufflepuff > max){
    max = hufflepuff;
    house = "Hufflepuff";
  }
  if (ravenclaw > max){
    max = ravenclaw;
    house = "Ravenclaw";
  }
  if (slytherin > max){
    max = slytherin;
    house = "Slytherin";
  }

  // display results
  std::cout << house <<"!\n";
}