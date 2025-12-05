#include <iostream>
using namespace std;
#include <fstream>
int main() {
    fstream fin("a.txt");
    int x, n=0;
    while (fin>>x) {
        n++;
    }
    fin.close();
    ifstream fin1("b.txt");
    while (fin1>>x) {
        n++;
    }
    fin1.close();
    cout << n << endl;

}