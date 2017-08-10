#include <iostream>

using namespace std;

int main() {

  int a[2][2] = { {1, 2}, {3, 4} };
  int b[2][2] = { {3, 5}, {7, 9} };  
  int temp = 0;

  for(int row = 0; row < 2; ++row){
    for(int round = 0; round < 2; ++round){
      for(int col = 0; col < 2; ++col){
        temp += a[row][col]*b[col][round];
      }
      cout << temp << " ";
      temp = 0;
    }
    cout << endl;
  }
  return 0;
}
