#include <iostream>
using namespace std;

void PriceCal(int, int, int);

main ()
{
  int Red, white, tulips;
  cout << "Enter number of red roses: ";
  cin >> Red;
  cout << "Enter number of white roses: ";
  cin >> white;
  cout << "Enter number of tulips: ";
  cin >> tulips;
  PriceCal(Red, white, tulips);
}


void PriceCal(int Red, int white, int tulips)
{
  float price, price2;

  price = Red*2 + white*4.10 + tulips*2.5;

  if (price > 200)
  {
    price2 = 0.8*price;
  }
  if (price < 201)
  {
    price2 = price;
  }
  
    cout << "Original price: " << price << endl;
    cout << "price after discount: " << price2 << endl;
} 