#include <iostream>

using namespace std;

int main() {
  
  int a = 10;
  // creating reference variable
  int &r = a;

  // reference variables are just another name for the same space in memory

  cout << a << endl; // expected: 10
  cout << r << endl; // expected: 10

  // increment r and see what  happens!
  r++;

  cout << a << endl; // expected: 11
  cout << r << endl; // expected: 11
 
  return 0;
}