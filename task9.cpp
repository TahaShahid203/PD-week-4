#include <iostream>
using namespace std;

void Reverse(string);

main () 
{
  string state;
  while(true)
  {
    cout << "Enter state: ";
    cin >> state;
    Reverse(state);
  }
}


void Reverse(string state)
{
  if (state == "true")
  {
    cout<< "False" << endl;
  }
  if (state == "false")
  {
    cout << "true" << endl;
  }
}