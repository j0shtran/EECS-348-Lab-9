#include <iostream>
#include <fstream>
using namespace std;

int main() {
  string filename;
  int size;
  int m_1[20][20];
  int main = 0;
  int secondary = 0;
  std::cout << "Enter a filename: ";
  std::cin >> filename;
  ifstream myfile(filename);
  myfile >> size;
  for (int i=0; i<size; i++) {
    for (int j = 0; j < size; j++) {
      myfile >> m_1[i][j];
    }
  }
  for (int i=0; i<size; i++) { //for every row/col 
    main += m_1[i][i]; //adds the values in a diagonal 
    secondary += m_1[i][size - i - 1]; //adds the values in the second diagonal 
  }
  //prints the main sum and the secondary sum
 cout << "Result:\n";
 cout << "Main sum: " << main << "\n";
 cout << "Secondary sum: " << secondary << "\n";

myfile.close();

  return 0;
}
