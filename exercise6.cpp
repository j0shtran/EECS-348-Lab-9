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
  int col1;
  int col2;
  cout << "Enter first column: ";
  int input;
  cin >> input;
  col1 = input-1;
  cout << "Enter second column: ";
  cin >> input;
  col2 = input-1;
  if (col1 >= 0 && col1 < size && col2 >= 0 && col2 < size) {
    for (int j = 0; j < size; j++) {
      int temp;
      temp = m_1[j][col1];
      m_1[j][col1] = m_1[j][col2];
      m_1[j][col2] = temp;
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
