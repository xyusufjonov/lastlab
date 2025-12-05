#include <iostream>
using namespace std;
#include <fstream>
int main() {
    ifstream fin("input3.txt");
    ofstream fout("output3.txt");
    long long max = 0;
    int x;
    while (fin>>x) {
        if (x > max) {
            max = x;
        }
    }
    fout << max;
    fout.close();
}