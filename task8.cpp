#include<iostream>
using namespace std;

void isEqual(int, int);

main() 
{
  int x, y;
  while (true)
  {
    cout << "Enter number: ";
    cin >> x;
    cout << "Enter number: ";
    cin >> y;
    isEqual(x, y);
  }

}

void isEqual(int x, int y)
{
   if(x == y)
   {
     cout << "True" << endl;
   }
   if(x != y)
   {
     cout << "False" << endl;
   }
}