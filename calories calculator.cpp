#include <iostream>
#include <cstdio>
using namespace std;

int main1()
{
 
  
 const float Bmr_Ratio = 88.362;
 const float Weight_Ratio = 13.397;
 const float Height_Ratio = 4.799;
 const float Age_Ratio = 5.677;
 int Weight_In_Kg;
 int Height_In_Cm;
 int Age_In_Years;
 float Activity_Level;
  
  
  cout << "==========================================\n";
  cout << "====== calories calculater  for men ======\n";
  cout << "==========================================\n\n";
  cout << "inter your weight in kg : ";
  cin >> Weight_In_Kg;
  cout << "inter your height in cm : ";
  cin >> Height_In_Cm;
  cout << "inter your age in years : ";
  cin >> Age_In_Years ;
  cout << "\n\nLight---Blanced---Heavy\n(1.2)---(1.5)---(1.7)\n\n\ninter your activity level : ";
  cin >> Activity_Level;

 float Weight = Weight_Ratio*Weight_In_Kg;
 float Height = Height_Ratio*Height_In_Cm;
 float Age = Age_Ratio*Age_In_Years;
 float Bmr = Bmr_Ratio + Weight + Height - Age;
 float Daily_Calories = Bmr*Activity_Level;
 
 
  /*c_commands*/ 

 
  cout <<"\n\n========== Your bmr is : " << Bmr << " Kcal ========== \n";
  
  cout <<"\n========== Your daly Calories is : " << Daily_Calories <<"\n\n\n\n\n";
 system("pause");
 
 return 0;
  

} 

