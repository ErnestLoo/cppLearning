#include <iostream>
#include <cmath>

int main(){

/*
math functions
  double x = 3;
  double y = 4;
  double z;

  z = std::max(x,y);
  z = std::min(x,y);
  z = pow(2,3); 
  z= abs(-3);

  x = 3.14;

  z = round(x);
  z = ceil(x);
  z = floor(x);

  std::cout<< z;
*/

  double a;
  double b;
  double c;

  std::cout << "Enter side A: ";
  std::cin >> a;
  std::cout << "Enter side B: ";
  std::cin >> b;

  c = sqrt(pow(a,2) + pow(b,2));

  std::cout << "Side C: " << c;

  return 0;
}