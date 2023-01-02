#include <iostream>
using namespace std;

void Discount(string, float);


main ()
{

  int price;
  string name;

  while (true)
  {
    cout <<"Enter name of country: ";
    cin >> name;
    cout << "Enter ticket price: ";
    cin >> price;

    Discount (name, price);
  }
}


void Discount(string name, float price)
{

  if (name == "Pakistan")
  {
    price = 0.95*price;
  }
  if (name == "Ireland")
  {
    price = 0.90*price;
  }
  if (name == "India")
  {
    price = 0.80*price;
  }
  if (name == "England")
  {
    price = 0.70*price;
  }
  if (name == "Canada")
  {
    price = 0.55*price;
  }

  cout << "Your total price is: " << price << endl;
}