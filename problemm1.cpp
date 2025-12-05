#include <iostream>
using namespace std;
#include <fstream>
int main() {
    ifstream fin("input1.txt");
    ofstream fout("output1.txt");
    int x;
    long long sum = 0;
    while (fin >> x) {
        sum += x;
    }
    fout << sum;
    fout.close();
    return 0;
}