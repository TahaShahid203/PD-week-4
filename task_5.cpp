#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int, int);

main () {



gotoxy(20,20);
cout << "  ########################  #####################   #####           #####    ####################" << endl;
gotoxy(20,21);
cout << "            ###             #####           #####   #####           #####    #####          #####" << endl;
gotoxy(20,22);
cout << "            ###             #####           #####   #####           #####    #####          #####" << endl;
gotoxy(20,23);
cout << "            ###             #####           #####   #####           #####    #####          #####" << endl;
gotoxy(20,24);
cout << "            ###             #####           #####   #####################    ####################" << endl;
gotoxy(20,25);
cout << "            ###             #####################   #####################    ####################" << endl;
gotoxy(20,26);
cout << "            ###             #####################   #####################    ####################" << endl;
gotoxy(20,27);
cout << "            ###             #####           #####   #####           #####    #####          #####" << endl;
gotoxy(20,28);
cout << "            ###             #####           #####   #####           #####    #####          #####" << endl;
gotoxy(20,29);
cout << "            ###             #####           #####   #####           #####    #####          #####" << endl;


}


void gotoxy(int x , int y)
{
   COORD coordinates;
   coordinates.X = x;
   coordinates.Y = y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}