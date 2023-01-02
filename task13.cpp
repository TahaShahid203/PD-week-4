#include <iostream>
using namespace std;


void Play(int);

main ()
{
  int holidays;
  cout << "Enter number of holidays: ";
  cin >> holidays;
  Play(holidays);
}


void Play(int holidays)
{
  float playtime, diff;
  int min, hour;
  playtime = (365 - holidays)*63 + holidays*127;
  diff = 30000 - playtime;
  if (diff > 0)
  {
     cout << "Tom sleeps well" << endl;
     hour = diff/60;
     min = diff - hour*60;
     cout << hour << " hours " << min << " minutes less for play" << endl;
  }
  if (diff < 0)
  {
     cout << "Tom will run away" << endl;
     diff = (-1)*diff;
     hour = diff/60;
     min = diff - hour*60;
     cout << hour << " hours " << min << " minutes more to play" << endl;
  }
}