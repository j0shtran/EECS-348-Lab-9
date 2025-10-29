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
  //the code up until this point is the same as previous exercises.

  for (int i=0; i<size; i++) { //for every row
    for (int j = 0; j < size; j++) { //for every column 
      result[i][j] = 0; //resets the result to 0 at the index 
      for (int k = 0; k<size; k++) { //for every val in the row/col
        result[i][j] += m_1[i][k] * m_2[k][j]; //adds the value of the number at the row index and the col index multiplied together to the total 
      }
    }
  }
  //prints the result 
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
