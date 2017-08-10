#include <iostream>

using namespace std;

int main() {
  int i = 0;
  int input = 0;
  // While Loop
  while( i < n ) {
    cout << i << ". Doing while!" << endl;
    ++i;
  }

  // Do-While Loop
  do{
    cout << "Enter some number : ";
    cin >> input;
  } while( input % 2 == 0 );

  cout << input << " is Odd. " << endl;



  return 0;
}
