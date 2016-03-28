
//Code by Frank Parsons

//Welcome to my Simple, 4 Operation Calculator Code!

#include <iostream>

int Multiply = 3;
int Divide = 4;
int Add = 1;
int Subtract = 2;
int Operation;
int Number1;
int Number2;


int main() {

std::cout << "Welcome to the Simple Calculator!";
std::cout << "\n";

std::cout << "What operation would you like to perform? (+ = 1, - = 2, * = 3, / = 4): ";
std::cin >> Operation;

std::cout << "Enter a number: ";
std::cin >> Number1;

std::cout << "Enter another number: ";
std::cin >> Number2;

if (Operation == Multiply) {

int Multiplication = Number1 * Number2;
std::cout << Number1;
std::cout << " ";
std::cout << "* ";
std::cout << Number2;
std::cout << " ";
std::cout << "= ";
std::cout << Multiplication;
std::cout << " ";
std::cout << "\n";
  }

if (Operation == Divide) {

  int Division = Number1 / Number2;
  std::cout << Number1;
  std::cout << " ";
  std::cout << "÷ ";
  std::cout << Number2;
  std::cout << " ";
  std::cout << "= ";
  std::cout << Division;
  std::cout << " ";
  std::cout << "\n";
    }


if (Operation == Add) {

    int Addition = Number1 + Number2;
    std::cout << Number1;
    std::cout << " ";
    std::cout << "+ ";
    std::cout << Number2;
    std::cout << " ";
    std::cout << "= ";
    std::cout << Addition;
    std::cout << " ";
    std::cout << "\n";
      }

if (Operation == Subtract) {

      int Subtraction = Number1 - Number2;
      std::cout << Number1;
      std::cout << " ";
      std::cout << "- " ;
      std::cout << Number2;
      std::cout << " ";
      std::cout << "= ";
      std::cout << Subtraction;
      std::cout << " ";
      std::cout << "\n";

  }



}
