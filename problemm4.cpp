#include <iostream>
using namespace std;
#include <fstream>
int main() {
    ifstream fin("input4.txt");
    ofstream fout("output4.txt");
    int x,y;
    long long sum = 0;
    while (fin >> x) {
        y = x;
    }
    for (int i = 1; i <= y; i++) {
        fout << i << endl;
    }
    fout.close();
    fin.close();
    return 0;
}