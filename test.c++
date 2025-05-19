/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    
    string studen = "จำนวนนักเรียน";
    int ny;
    string pin = "คะแนน";
    int my;
    string all = "เกรดที่ได้";
    string q = "เฉลี่ย";
    int lol;
    string all1 [5] = {"A", "B", "C","D", "F"};
    
  std::cout <<  studen << std::endl; 
  std::cin >>  ny ;
  
  std::cout <<  pin << std::endl;  
  std::cin >> my ;

  std::cout <<  all << std::endl; 
  lol = ny + my % 2 ; 

     if (lol <= 90 )
    {
        cout << q;
        cout << all1 [0];
    }
    else if (lol <= 80)
    {
        cout << q;
        cout << all1 [1];
    }
        else if (lol <= 70)
    {
        cout << q;
        cout << all1 [2];
    }
        else if (lol <= 60)
    {
        cout << q;
        cout << all1 [3];
    }
    else
    {
        cout << q;
        cout << all1 [4];
    }
    
    return 0;
}