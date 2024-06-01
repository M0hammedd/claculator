#include <iostream> 
#include <array>
#include <string>
#include "calories calculator.cpp"
#include "gpa_calcultor.cpp"

using namespace std ;

int main ()
{
  int cal;
  cout << "==========================================================================\n";
  cout << "=================== wlacome to the ultimate calculator ===================\n";
  cout << "========================================================================== ";
  cout << "\n\n[1] GPA CALCULATOR\n[2] calories calculator\n\n please choose whitch calculator you need : ";
  cin >> cal;
  if (cal == 1 )
    {
    GPA();
    }
  else if (cal == 2)
    {
    main1();
    }

}