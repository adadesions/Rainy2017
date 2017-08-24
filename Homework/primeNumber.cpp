  #include <iostream>

using namespace std;

bool isPrime(int a) {
  if( a == 1 || a == 0 ) return false;
  if( a == 2 ) return true;

  for(int i = 2; i < a; i++){
    if(a%i == 0){
      return false;
    }
    else
      continue;
  }
  return true;
}

int main() {
  int input = 0;
  cout << "Enter a number, you think is prime number : ";
  cin >> input;
  if( isPrime(input) )
    cout << input << " is a prime number" << endl;
  else
    cout << input << " is not a prime number" << endl;
  return 0;
}
