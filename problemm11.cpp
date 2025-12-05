#include <iostream>
using namespace std;
# include  <fstream>
int main() {
  string name = "File handling in C++ is easy!";
  ofstream fout("report.txt");
  fout<<name<<endl;
}