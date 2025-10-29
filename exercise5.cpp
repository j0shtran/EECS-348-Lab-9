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
  //takes user input for two rows to swap
  cout << "Enter first row: ";
  int input;
  cin >> input;
  row1 = input-1; //subtracts it by 1 because the lists start at index 0
  cout << "Enter second row: ";
  cin >> input;
  row2 = input-1; //same with this row
  if (row1 >= 0 && row1 < size && row2 >= 0 && row2 < size) { //checks to make sure the rows given are within the bounds of the matrix
    for (int j = 0; j < size; j++) { //for every row/col
      int temp; //declares temp variable 
      temp = m_1[row1][j]; //sets the temp to the first row
      m_1[row1][j] = m_1[row2][j]; //sets the first row to the second row
      m_1[row2][j] = temp; //and the second row to the temp row, switching them out
    }
  }
  else { //if the rows given were not within the bounds, gives an error message and stops the program. 
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
