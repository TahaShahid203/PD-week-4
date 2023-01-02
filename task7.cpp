#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int, int);
void printMaze();
main() 

{
  system("cls");
  printMaze();
  gotoxy(14,5);
  int i = 5;
  int d = 0;
  while (true)
  {
    if(i==17)
    {
       d = 1;
       i = 15;
    }
    if (i == 0)
    {
       d = 0;
       i = 2;
    }
    if(d == 0)
    {
      gotoxy (14, i - 1);
      cout << " ";
      gotoxy(14, i);
      cout << "P";
      Sleep(200);
      if ( i!= 17)
      {

        i = i + 1;
      }
    }

    if (d == 1)
    {
      gotoxy (14, i + 1);
      cout << " ";
      gotoxy(14, i);
      cout << "P";
      Sleep(200);
      if (i!=0)
      {
        i = i - 1;
      }
    }
  }
}


void printMaze() 
{
  cout << "#############################################" << endl;
  cout << "#                                           #" << endl;
  cout << "#                                           #" << endl;
  cout << "#                                           #" << endl;
  cout << "#                                           #" << endl;
  cout << "#                                           #" << endl;
  cout << "#                                           #" << endl;
  cout << "#                                           #" << endl;
  cout << "#                                           #" << endl;
  cout << "#                                           #" << endl;
  cout << "#                                           #" << endl;
  cout << "#                                           #" << endl;
  cout << "#                                           #" << endl;
  cout << "#                                           #" << endl;
  cout << "#                                           #" << endl;
  cout << "#                                           #" << endl;  
  cout << "#                                           #" << endl;
  cout << "#############################################" << endl;
}

void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X =x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}