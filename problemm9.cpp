#include <iostream>
using namespace std;
#include <fstream>
int main() {
    ifstream fin("input9.txt");
    ofstream fout("output9.txt");
    int x;
    while (fin >> x) {
        if (x%2==0) {
            fout << x << endl;
        }
    }
    fin.close();
    return 0;
}
