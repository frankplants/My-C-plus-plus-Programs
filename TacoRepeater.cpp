
//Code by Frank Parsons

//Welcome to my Taco Repeater Code!

#include <iostream>

int Taco;

int main() {
std::cout << "Welcome to the Taco Repeater!";
std::cout << "\n";
std::cout << "How many tacos?: ";
std::cin >> Taco;

do
{
std::cout << " Taco ";
Taco--;

} while (Taco > 0);

std::cout << "\n";

return(0);

}
