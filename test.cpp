/**************************
  Demo Program to show while and do while 
  Author : Asutosha Sarangi
  Date   : 2022-08-30
***************************/

#include <iostream>

using namespace std;

int
main ()
{
  cout << "Welcome to While and DO-While Loop\n";
  cout << "-----------------------------------\n\n";

  cout << "\n1. While Loop\n";
  int r = 0;
  while (r != 1)
    {
      cout << " Please Enter any value to continue except 1 : " ;
      cin >> r;
    }

   /*-----------------------------------------------*/
//   cout << "\033[2J\033[1;1H";
  cout << "Welcome to While and DO-While Loop\n";
  cout << "-----------------------------------\n\n";
  cout << "\n2. Do-While Loop\n";
  r = 1;
  do
    {

      cout << "Please Enter any value to stop except 1 : ";
      cin >> r;

    }
  while (r == 1);

  cout << "\nWhile and Do-While Loop Demo Over";
  cin >> r;
  return 0;
}