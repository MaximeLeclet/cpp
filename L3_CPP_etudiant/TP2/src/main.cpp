#include <iostream>

int main() {

  int val = 36;
  int * pointeur; 

  pointeur = &val;

  std::cout << *pointeur << std::endl;
  
}
