#include <iostream>

using namespace std;

int main()
{
  int someLongVariableName = 10;
  // int &r; // uninitialized references will throw exception
  int &r = someLongVariableName; // "r" is now a nickname for "a"
  
  cout << "Initial someLongVariableName: " << someLongVariableName << endl; // 10
  cout << "Initial r: " << r << endl << endl; // 10
  
  // references are bound to the variable they reference!

  int b = 25;
  r = b; // someLongVariableName will be 25
  
  cout << "r was set to b. b: " << b << endl; // 25
  cout << "someLongVariableName: " << someLongVariableName << endl; // 25
  cout << "r: " << r << endl; // 25

  return 0;
}
