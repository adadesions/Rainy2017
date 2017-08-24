#include <iostream>

using namespace std;

int findMin( int data[], int size ){
  int min = 1000000;
  int index = 0;
  for(int i = 0; i < size; ++i){
    if(min >= data[i]){
      min = data[i];
      index = i;
    }
  }
  data[index] = 100000000;
  return min;
}

int main() {
  int data[] = {78, 12, 4, 73, 1405, 267, 3, 9012, 44, 1};
  int size = sizeof(data)/sizeof(int);
  int sorted[size];

  for(int i = 0; i < size; ++i){
    sorted[i] = findMin(data, size);
    cout << sorted[i] << " ";
  }
  cout << endl;

  return 0;
}
