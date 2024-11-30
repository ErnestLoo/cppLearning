#include <iostream>

int main()
{

  std::string name;

  std::cout << "Enter your name: ";

  std::getline(std::cin, name);

  if (name.empty())
  {
    std::cout << "You didn't enter anything.\n";
  }
  else if (name.length() > 12)
  {
    std::cout << "Your name cannot be 12 letters long.\n";
  }
  else
  {
    std::cout << "Your name is " << name;
  }

  return 0;
}