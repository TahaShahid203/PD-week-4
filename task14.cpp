#include <iostream>
#include <windows.h>
using namespace std;

void printMenu();
void calculateAggregate(string name, int matricMarks, int interMarks, int ecatMarks);
void compareMarks(string nameStd1, int ecatMarksStd1, string nameStd2, int ecatMarksStd2);

main()
{
  int key, matricMarks1, matricMarks2, interMarks1, interMarks2, ecat1, ecat2;
  string nameS1, nameS2;
  char noPoint;
  while (true)
  {
    system("cls");
    printMenu();
    cin >> key;
    if (key == 1)
    {
      system("cls");
      cout << "You chose: 1" << endl;
      cout << "Enter first student's name: ";
      cin >> nameS1;
      cout << "Enter first student's matric marks (out of 1100): ";
      cin >> matricMarks1;
      cout << "Enter first student's inter marks (out of 550): ";
      cin >> interMarks1;
      cout << "Enter first student's ecat marks (out of 400): ";
      cin >> ecat1;
      cout << "Enter any key to continue: " << endl;
      cin >> noPoint;
    }
    if (key == 2)
    {
      system("cls");
      cout << "You chose: 2" << endl;
      cout << "Enter second student's name: ";
      cin >> nameS2;
      cout << "Enter second student's matric marks (out of 1100): ";
      cin >> matricMarks2;
      cout << "Enter second student's inter marks (out of 550): ";
      cin >> interMarks2;
      cout << "Enter second student's ecat marks (out of 400): ";
      cin >> ecat2;  
      cout << "Enter any key to continue: " << endl;
      cin >> noPoint;  
    }
    if (key == 3)
    {
      system("cls");
      cout << "You chose: 3" << endl;
      calculateAggregate(nameS1, matricMarks1, interMarks1, ecat1);
      cout << "Enter any key to continue: " << endl;
      cin >> noPoint;
    }
    if (key == 4)
    {
      system("cls");
      cout << "You chose: 4" << endl;
      calculateAggregate(nameS2, matricMarks2, interMarks2, ecat2);
      cout << "Enter any key to continue: " << endl;
      cin >> noPoint;
    }
    if (key == 5)
    {
      system("cls");
      cout << "You chose: 5" << endl;
      compareMarks(nameS1, ecat1, nameS2, ecat2);
      cout << "Enter any key to continue: " << endl;
      cin >> noPoint;
    }
  }
}

void printMenu()
{

  cout << "  ********************************************************" << endl;
  cout << "  *            University Management System              *" << endl;
  cout << "  ********************************************************" << endl;
  cout << "Press 1 to enter details of first student" << endl;
  cout << "Press 2 to enter details of second student" << endl;
  cout << "Press 3 to calculate aggregate of first student" << endl;
  cout << "Press 4 to calculate aggregate of second student" << endl;
  cout << "Press 5 to see student with roll no.1" << endl;
}

void calculateAggregate(string name, int matricMarks, int interMarks, int ecatMarks)
{
  float aggregate;

  aggregate = 0.3*matricMarks/11 + 0.6*interMarks/11 + 0.1*ecatMarks;

  cout << name << "'s aggregate is " << aggregate << endl;
}
void compareMarks(string nameStd1, int ecatMarksStd1, string nameStd2, int ecatMarksStd2)
{
  if (ecatMarksStd1 > ecatMarksStd2)
  {
    cout << "Roll no. 1 has been assigned to: " << nameStd1 << endl;
  }
  if (ecatMarksStd2 > ecatMarksStd1)
  {
    cout << "Roll no. 1 has been assigned to: " << nameStd2 << endl;
  }
}