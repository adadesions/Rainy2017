#include <iostream>

using namespace std;

int main() {
  int a = 100;
  int input = 0;
  cout << "Enter some number that you think is more than 100: ";
  cin >> input;
  cout << endl;
  cout << "input is : " << input << endl;
  //if-else
  if( input > a ){
    cout << "Yeah!! input more than 100" << endl;
    
  }
  else if( input == 100 ){
    cout << "Ok! input is 100" << endl;
  }
  else {
    cout << "Oh!! Try again!!" << endl;
  }

  return 0;
}
