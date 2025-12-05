#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream fin("data.txt");
    int n, count=0;
    while (fin >> n) {
        if (n<0) {
            count++;
        }
    }
    cout << count << endl;
}