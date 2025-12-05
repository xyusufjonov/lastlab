#include <iostream>
using namespace std;
#include <fstream>
int main() {
    ifstream fin("source.txt");
    string x;
    ofstream fout("copy.txt");
    while (fin >> x) {
        fout << x << endl;
    }
    fin.close();
    fout.close();
    return 0;


}