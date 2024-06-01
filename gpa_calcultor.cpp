#include <iostream> 
#include <array>
#include <string>
using namespace std;

  double grade1;
  double sum = 0 ;
  int creditss = 0;
  const double A1 = 4.3;
  const double A = 4;
  const double A2 = 3.7;
  const double B1 = 3.3;
  const double B = 3;
  const double B2 = 2.7;
  const double C1 = 2.3;
  const double C = 2;
  const double C2 = 1.7;
  const double D1 = 1.3;
  const double D = 1;
  const double D2 = 0.7;
  const double F = 0;
  int credits_number;

/*CONVERTING GRADE FROM THE STRING PROVIDED BY USER TO THE CONST VALUE*/
void grode(string grade)
{
         if(grade=="A+") 
     {
         grade1=A1;
     }     
         else if(grade=="A") 
     {
         grade1=A;
     }     
         else if(grade=="A-") 
     {
         grade1=A2;
     }     
         else if(grade=="B+") 
     {
         grade1=B1;
     }     
         else if(grade=="B") 
     {
         grade1=B;
     }     
         else if(grade=="B-") 
     {
         grade1=B2;
     }     
         else if(grade=="C+") 
     {
         grade1=C1;
     }     
         else if(grade=="C") 
     {
         grade1=C;
     }     
         else if(grade=="C-") 
     {
         grade1=C2;
     }     
         else if(grade=="D+") 
     {
         grade1=D1;
     }     
         else if(grade=="D") 
     {
         grade1=D;
     }     
         else if(grade=="D+") 
     {
         grade1=D2;
     } 
         else if(grade=="F") 
     {
         grade1=F;
     } 
         
}

/*MILTIPLYING CREDITS * GRADE CONST */
/*double gpa(int credit , double grade)
{
 double sum = credit * grade;
 return sum;

}*/
void welcomer()
{
        cout << "==============================================================================\n";
    cout << "========================= WLECOME TO GPA CALCULATOR ==========================\n";
    cout << "==============================================================================\n\n\n";
    cout << " please enter how many course do you have : ";
}


/*the main function*/
int GPA()
{  

    welcomer();
    cin >> credits_number;
   for (int i=1;i<=credits_number;i++)
   {
    int credits ;
    string grade;
    
     cout << "enter credit hours for course number("<<i<<")";
     cin >> credits;
     cout << "A+\nA\nA-\nB+\nB\nB-\nC+\nC\nC-\nD+\nD\nD-\nF\ncopy your course grade the grade of the grade : ";
     cin >> grade ;
     grode(grade);
     sum+=(credits*grade1);
     creditss+=credits;
   }
                  
double sum1 = sum/creditss;
if (sum1 > 2)
  {
    cout << "===== congratulations === you got  "  << sum1 << " GPA";
  }
else 
{
    cout <<  "your gpa is" << sum1 << " you are such a looser go study !! ";
}

return 0;
}