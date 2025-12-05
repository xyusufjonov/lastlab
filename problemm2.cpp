#include <iostream>
using namespace std;
#include <fstream>
int main() {
    string x;
    getline(cin, x);
    ofstream fout("output2.txt");
    fout << x;
}