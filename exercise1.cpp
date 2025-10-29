#include <iostream>
#include <fstream>
using namespace std;

int main() {
  string filename; //declares string filename 
  int size; //declares int size
  int m_1[20][20], m_2[20][20]; //declares two matrices m_1 and m_2, max size 20 in each. 
  std::cout << "Enter a filename: "; //asks user for file name
  std::cin >> filename; //takes name of the file and makes it the value of filename 
  ifstream myfile(filename); //opens the file for reading
  myfile >> size; //gets the size of the matrices from the first value in the file
  for (int i=0; i<size; i++) { //for every row
    for (int j = 0; j < size; j++) { //for every column 
      myfile >> m_1[i][j]; //saves the next group of text (which will be a number) at the row and column index 
    }
  }
  for (int i=0; i<size; i++) { //does the same for the second matrix
    for (int j = 0; j < size; j++) {
      myfile >> m_2[i][j];
    }
  }

  cout << "Matrix 1:\n";
  for (int i=0; i<size; i++) { //for every row
    for (int j = 0; j < size; j++) { //for every column 
      std::cout << m_1[i][j] << "\t"; //prints every value within the matrix
    }
    cout << "\n";
  }
 cout << "Matrix 2:\n"; //does the same for the second matrix
  for (int i=0; i<size; i++) {
    for (int j = 0; j < size; j++) {
      std::cout << m_2[i][j] << "\t";
    }
    cout << "\n";
  }

myfile.close();

  return 0;
}

