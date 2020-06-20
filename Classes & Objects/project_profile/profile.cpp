#include "profile.hpp"
#include <iostream>

// Profile constructors
Profile::Profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns){
  name = new_name;
  age = new_age,
  city = new_city;
  country = new_country;
  pronouns = new_pronouns;

}

std::string Profile::view_profile(){
  std::string profile_info = "Name : " + name;
  profile_info += "\nAge: " + std::to_string(age);
  profile_info += "\nPronouns: " + pronouns;
  profile_info += "\nHobbies: ";
  for (int i=0; i<hobbies.size(); i++){
    profile_info += hobbies[i] + ",\n";
  }
  return profile_info;
}

void Profile::add_hobby(std::string new_hobby){
  hobbies.push_back(new_hobby);
}