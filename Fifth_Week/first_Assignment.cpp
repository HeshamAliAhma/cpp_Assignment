#include <iostream>
using namespace std;

int main()
{
  int age = 40;
  int points = 800;
  float rate = 8.5f;

  // Your Condition Here
  if (age > 18 && points > 500 && rate > 5)
  {
    cout << "Yes Age > 18 & Points > 500 & Rate > 5";
  }

  // short condition
    // cout << (age > 18 && points > 500 && rate > 5 ? "Yes Age > 18 & Points > 500 & Rate > 5" : "" )

  return 0;
}

// Output Needed If All Conditions Is True
// "Yes Age > 18 & Points > 500 & Rate > 5"