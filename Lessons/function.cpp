#include <iostream>

using namespace std;

bool isEven(int n) { // Function definition
  return n % 2 == 0;
}

int dividedBy2( int n ) {
  if( n == 0 ){
    return 0;
  }
  int result = n/2;
  return result;
}

bool is2Digits ( int input ) {
  if( input < 10 ){
    cout << input << " has 1 digit" << endl;
    return false;
  }
  else if( input >= 10 && input <= 99 ){
    cout << input << " has 2 digit" << endl;
    return true;
  }
  else{
    cout << "ERROR input digits more than 2" << endl;
  }
  return false;
}

int main() {
  int input = 0;
  do{
    cout << "Enter some number : ";
    cin >> input;
  } while( is2Digits(input) );

  cout << input << " is not 2 digits" << endl;

  return 0;
}

// Problem
// input : 23
// output : 2 digits
// input : 2
// output : 1 digits
// input : 123
// output : Error!!
