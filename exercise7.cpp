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
  int row;
  int col;
  cout << "Enter row number: ";
  int input;
  cin >> input;
  row = input-1;
  cout << "Enter column number: ";
  cin >> input;
  col = input-1;
  cout << "Enter new value: ";
  cin >> input;
  if (row >= 0 && row < size && col >= 0 && col < size) { //makes sure the row and columns given are within the size of the matrix.
      m_1[row][col] = input; //simply sets the value at the row and column given to the value given. 
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
