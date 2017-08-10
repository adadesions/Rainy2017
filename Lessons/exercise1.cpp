#include <iostream>
#include <cmath>

using namespace std;

bool isPrime( int n ) {
  if( n == 2){
    return true;
  }

  for(int i = 2; i <= sqrt(n); ++i){ // 10^4 sqrt(10^4) = 10^2
      if( n % i == 0){
        return false;
      }
  }
  return true;
}

int main() {
  // 1.
  // input : 3 5 10 430 1223 58693402
  // output: 1 1  2   3    4        8 digits
  //

  // 2.
  // input : 3      5
  // output: 2,3,5  2,3,4,7,11
  //
  int input = 0;
  int i = 2;
  int count = 0;
  cout << "Enter number for (2) : ";
  cin >> input;

  while( count < input ) {
    if( isPrime(i) ){
      cout << i << " ";
      ++count;
    }
    ++i;
  }
  cout << endl;

  // 3.
  // input : 2    3     4       12
  // output: 1,2  1,3   1,2,4   1,2,3,4,6,12
  // int input = 0;
  // cout << "Enter number for (3) : ";
  // cin >> input;
  //
  // for(int i = 1; i <= input; ++i){
  //   if( input % i == 0 ){
  //     cout << i << " ";
  //   }
  // }
  // cout << endl;

  return 0;
}
