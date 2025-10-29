#include <iostream>
#include <fstream>
using namespace std;

int main() {
  string filename;
  int size;
  int m_1[20][20];
  std::cout << "Enter a filename: ";
  std::cin >> filename;
  ifstream myfile(filename);
  myfile >> size;
  for (int i=0; i<size; i++) {
    for (int j = 0; j < size; j++) {
      myfile >> m_1[i][j];
    }
  }
  int row1;
  int row2;
  cout << "Enter first row: ";
  int input;
  cin >> input;
  row1 = input-1;
  cout << "Enter second row: ";
  cin >> input;
  row2 = input-1;
  if (row1 >= 0 && row1 < size && row2 >= 0 && row2 < size) {
    for (int j = 0; j < size; j++) {
      int temp;
      temp = m_1[row1][j];
      m_1[row1][j] = m_1[row2][j];
      m_1[row2][j] = temp;
    }
  }
  else {
    cout << "Invalid bounds.";
    return 1;
  }

  cout << "Result: \n";
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      cout << m_1[i][j] << "\t";
    }
    cout << "\n";
  }

 myfile.close();

  return 0;
}
