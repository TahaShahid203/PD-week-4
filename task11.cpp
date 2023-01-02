#include <iostream>
using namespace std;


void Speeding(int);

main() 
{
  int speed;
  while(true)
  {
    cout << "Enter speed of your car: ";
    cin >> speed;
    Speeding(speed);
  }
}

void Speeding(int speed)
{
  if (speed > 100)
  {
    cout << "HALT!....You will be challenged" << endl;
  }
  if (speed < 101)
  {
    cout << "Perfect!You're doing good" << endl;
  }
}