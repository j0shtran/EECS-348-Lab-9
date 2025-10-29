#include <iostream>
#include <fstream>
using namespace std;

int main() {
  string filename;
  int size;
  int m_1[20][20], m_2[20][20], result[20][20];
  std::cout << "Enter a filename: ";
  std::cin >> filename;
  ifstream myfile(filename);
  myfile >> size;
  for (int i=0; i<size; i++) {
    for (int j = 0; j < size; j++) {
      myfile >> m_1[i][j];
    }
  }
  for (int i=0; i<size; i++) {
    for (int j = 0; j < size; j++) {
      myfile >> m_2[i][j];
    }
  }

  for (int i=0; i<size; i++) {
    for (int j = 0; j < size; j++) {
      result[i][j] = 0;
      for (int k = 0; k<size; k++) {
        result[i][j] += m_1[i][k] * m_2[k][j];
      }
    }
  }
  cout << "Result:\n";
  for (int i=0; i<size; i++) {
    for (int j = 0; j < size; j++) {
      std::cout << result[i][j] << "\t";
    }
    cout << "\n";
  }

myfile.close();

  return 0;
}
