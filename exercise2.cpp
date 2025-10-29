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
  // the code up until this point is the exact same as exercise 1.

  for (int i=0; i<size; i++) { //for every row
    for (int j = 0; j < size; j++) { //for every column 
      result[i][j] = m_1[i][j] + m_2[i][j]; //adds the values at the row and column index from both matrices and saves it into
                                            //the third matrix that stores the results. 
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
