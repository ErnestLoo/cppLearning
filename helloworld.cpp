#include <iostream>

int main()
{
  
  int *pNum = NULL;

  pNum = new int;

  *pNum = 21;

  std::cout << "addresss: " << pNum << '\n';
  std::cout << "value: " << *pNum << '\n';

  delete pNum;

  return 0;
}