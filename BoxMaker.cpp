
//Code by Frank Parsons

//Welcome to my Box Maker Code!

#include <iostream>

int rows, columns;
char character;

int main(){
std::cout << "Welcome to the Box Maker!";
std::cout << "\n";

std::cout << "How many columns?: ";
std::cin >> columns;

std::cout << "How many rows?: ";
std::cin >> rows;

std::cout << "What character to display?: ";
std::cin >> character;


std::cout << "\n";

for(int i = 0; i < rows; i++) {

  for(int j = 0; j < columns; j++) {

    std::cout << character;
  }

  std::cout << "\n";
}

return 0;

}
