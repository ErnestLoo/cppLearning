#include <iostream>


int main(){

  std::string name;
  int age;
  
  std::cout<< "How old are you?: ";

  std::cin>> age;

  std::cout<< "What is your name?: ";

  std::getline(std::cin >> std::ws, name);

  std::cout<< "Hello " << name << ". You are " << age << " years old.";
  
  return 0;
}