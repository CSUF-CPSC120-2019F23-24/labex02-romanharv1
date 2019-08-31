// Name: Restaurant Bill Calculator
// This program calculates the tax and tip on a restaurant bill.

#include <iostream>

int main()
{
  double price, tax, tip;
  double total;

  //Get value of price.
  std::cout << "Welcome to the Restaurant Bill Calculator!\n";
  std::cout << "What is the total meal cost? $";
  std::cin >> price;

  //Calculate values for tax, tip, and total.
  tax = price * 0.0775;
  tip = price * 0.2;
  total = price + tax +tip;

  //Display calculated values.
  std::cout << "Tax:\t\t$" << tax << "\n";
  std::cout << "Tip:\t\t$" << tip << "\n";
  std::cout << "Total Bill: \t$" << total << "\n";

  return 0;
}
