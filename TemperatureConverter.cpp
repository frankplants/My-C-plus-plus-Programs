
//Code by Frank Parsons

//Welcome to my Celsius to Fahernheit Temperature Converter Code!

#include <iostream>

void convert();

float fahrenheit;
float celsius;

int main()
{
  std::cout << "Welcome to the Fahernheit to Celsius Converter!";
  std::cout << "\n";

  std::cout << "Please Enter a Temperature in Fahernheit: ";
  std::cin >> fahrenheit;;
  convert();
  std::cout << "\nHere's the Temperature in Celsius: ";
  std::cout << celsius << "\n";
  return 0;
}

void convert()
{
  celsius = ((fahrenheit - 32) * 5) / 9;
}
