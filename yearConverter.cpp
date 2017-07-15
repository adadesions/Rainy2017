#include <iostream>
#include <string>

using namespace std;

int main() {
  int year = 0;
  string era = "";
  int type = -1;
  cout << "Enter the year: ";
  cin >> year;
  cout << "Enter the Era: ";
  cin >> era;

  if( era == "BE"){
    cout << "This year is " << year - 543 << endl;
  }
  else{
    cout << "This year is " << year + 543 << endl;
  }

  return 0;
}
