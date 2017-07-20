#include <iostream>

using namespace std;

int main() {
  //Problem 1
  int a[5] = {1,2,3,4,5};
  int b[5] = {4,5,6,7,8};
  int size = sizeof(a)/sizeof(int);
  int c[size];

  for(int i = 0; i < size ; i++)
  {
    c[i] = a[i] + b[i];
    cout << c[i] << endl; // GET
  }

  //Problem 2
  int m[50], n[50];
  for(int i = 0; i < 50; i++)
  {
    m[i] = i+1;
    n[i] = 101 - m[i];
    cout << m[i] + n[i] << " ";
  }
  cout << endl;

  //Multi-dimansional Array
  int A[2][2] = {
    {1, 2},
    {3, 4}
  };
  int B[2][2] = {
    {1, 0},
    {0, 1}
  };
  int rows, cols;
  rows = sizeof(A)/sizeof(A[0]);
  cols = sizeof(A[0])/sizeof(int);
  cout << "Rows : " << rows << endl;
  cout << "Cols : " << cols << endl;

  for(int row = 0; row < 2; row++){
    for(int col = 0; col < 2; col++){
      cout << A[row][col] + B[row][col] << " ";
    }
    cout << endl;
  }

  int N[2][2][2] = { // N[0][0][0] = 1
    {
      {1, 2},
      {3, 4}
    },
    {
      {5, 6},
      {7, 8}
    }
  };

  cout << "N(0,2,1) = " << N[1][0][1] << endl;

  return 0;
}
