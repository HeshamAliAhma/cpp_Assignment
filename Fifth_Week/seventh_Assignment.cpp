#include <iostream>
using namespace std;
int main()
{
  int result = 0;
  int num1, num2, num3, num4;
  cout << "Please Type 5 Numbers In A Row\n";
  cout << "Only Even Numbers Smaller Than 20 Will Be Counted\n";
  cin >> num1 >> num2 >> num3 >> num4;
  if (num1 < 20 && num1 % 2 == 0)
  {
    cout << result << " + " << num1 << " = ";
    result += num1;
    cout << result << endl;
  }
  if (num2 < 20 && num2 % 2 == 0)
  {
    cout << result << " + " << num2 << " = ";
    result += num2;
    cout << result << endl;
  }
  if (num3 < 20 && num3 % 2 == 0)
  {
    cout << result << " + " << num3 << " = ";
    result += num3;
    cout << result << endl;
  }
  if (num4 < 20 && num4 % 2 == 0)
  {
    cout << result << " + " << num4 << " = ";
    result += num4;
    cout << result << endl;
  }

  return 0;
}
