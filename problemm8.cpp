#include <iostream>
using namespace std;
#include <fstream>
int main() {
    ifstream fin("text.txt");
    string x;
    int count = 0;
    while (getline(fin, x)) {
        count++;
    }
    cout << count << endl;
}