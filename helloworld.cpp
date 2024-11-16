#include <iostream>

int main(){

  //This is a comment
  /*
  multi-line comment
  */

  // std::cout << "I like pizza!" << '\n';
  // std::cout << "It's really good" << '\n';
  
  int x = 5;
  int y = 6;
  int sum = x + y;

  std::cout << x << '\n';
  std::cout << y << '\n';
  std::cout << sum << '\n';

  std::string name = "Bro";
  std::string age = "20";

  std::cout << name;
  std::cout << "Hello " << name << '\n';
  std::cout << "You are " << age << " years old";
  
  return 0;
}