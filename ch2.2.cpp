// operations with variables

#include <iostream>
#include <string>
using namespace std;

int main ()
{
  int a=5;                // initial value = 5
  int b(2);               // inital value = 2
  int result;             // initial value undetermined

  a = a + 3;
  result = a - b;
  cout << result;
  cout << "\n";

  string mystring = "This is a string";
  cout << mystring << endl;
  mystring = "This is another string";
  cout << mystring << endl; 

  return 0;
}
