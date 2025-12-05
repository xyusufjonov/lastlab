#include <iostream>
#include <fstream>
using namespace std;
int main() {
    std::ofstream fout;
    fout.open("input7.txt", ios::app);
    if (fout.is_open()) {
        fout << "\n42\n";
    }
    fout.close();
}