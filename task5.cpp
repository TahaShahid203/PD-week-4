#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int, int);


main()
{

  system("cls");
  int i = 15;
  while(i > 5)
  {
    gotoxy(15, i);
    cout << "####" << endl;
    i = i - 1;
  }
  gotoxy(10, 5);
  cout << "################" << endl;
  int b = 15;
  while(b > 5)
  {
     gotoxy(27, b);
     cout << "###" << endl;
     b = b - 1;
  }
  int c = 27;
  while (c < 39)
  {
    gotoxy(c, 5);
    cout << "#" << endl;
    c = c + 1;
  }
  int d = 15;
  while(d > 5)
  {
    gotoxy(36, d);
    cout << "###" << endl;
    d = d - 1;
  }
  int e = 27;
  while (e < 39)
  {
     gotoxy(e, 10);
     cout << "#";
     e = e + 1;
  }
  int f = 15;
  while (f > 5)
  {
    gotoxy(43, f);
    cout << "####" << endl;
    f = f - 1;
  }
  

}

void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
