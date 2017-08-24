#include <iostream>
#include <cmath>

using namespace std;

float mean( float data[], int size) {
  float sum = 0;
  for(int i = 0; i < size; ++i){
    sum = sum + data[i];
  }
  return (float)sum/size;
}

float findMax(float data[], int size) {
  float max = -1;
  for(int i = 0; i < size; ++i){
    if( max <= data[i] ){
      max = data[i];
    }
  }
  return max;
}

float findMin( float data[], int size ){
  float min = 100000000;
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

float mode( float data[], int size) {
  int capacity = findMax(data, size);
  int count[capacity] = {0};
  int fMode = -1;
  float result = 0;

  for(int i = 0; i < size; ++i){
    int index = data[i] - 1;
    count[index]++;
  }

  for(int i = 0; i<capacity; ++i){
    if( fMode < count[i] ){
      fMode = count[i];
      result = i;
    }
  }
  return result + 1;
}

int median(float data[], int size) {
  return data[size/2];
}

float SD(float data[], float mean, int size) {
  float sum = 0;
  for(int i = 0; i < size; ++i){
    float diff = pow(data[i] - mean, 2);
    sum = sum + diff;
  }
  return (float)sqrt(sum/size);
}

void printScore(float data[], int size) {
  for(int i = 0; i < size; ++i)
    cout << data[i] << " ";
  cout << endl;
}



int main() {
  float data1[] = { 15, 80, 99, 35, 75, 34, 38, 38, 14, 38, 100, 97, 96.5, 95, 55 };
  float data2[] = { 30, 30, 32, 13, 14, 55, 78.9, 23.4, 100, 75, 98, 16, 32, 25, 22.2};
  int size1 = sizeof(data1)/sizeof(float);
  int size2 = sizeof(data2)/sizeof(float);
  float s_data1[size1] = {0};
  float s_data2[size2] = {0};

  // Sorting Data
  for(int i = 0; i < size1; ++i) {
    s_data1[i] = findMin(data1, size1);
    s_data2[i] = findMin(data2, size2);
  }
  float mean1 = mean(s_data1, size1);
  float mean2 = mean(s_data2, size2);
  // Display start!!
  cout << "M.6/1 : ";
  printScore(s_data1, size1);
  cout << "Mean : " << mean1 << endl;
  cout << "Mode : " << mode(s_data1, size1) << endl;
  cout << "Med : " << median(s_data1, size1) << endl;
  cout << "SD : " << SD(s_data1, mean1, size1) << endl;

  cout << "==================================================================" << endl;

  cout << "M.6/2 : ";
  printScore(s_data2, size2);
  cout << "Mean : " << mean2 << endl;
  cout << "Mode : " << mode(s_data2, size2) << endl;
  cout << "Med : " << median(s_data2, size2) << endl;
  cout << "SD : " << SD(s_data2, mean2, size2) << endl;

  // Concatenate Array
  int totalSize = size1 + size2;
  float c_data[totalSize] = {0};
  for(int i = 0; i < totalSize; ++i){
    if(i >= size1){
      c_data[i] = s_data2[i - size1];
    }
    else {
      c_data[i] = s_data1[i];
    }
    cout << c_data[i] << " ";
  }

  cout << endl;

  return 0;
}
