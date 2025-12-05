#include   <iostream>
using namespace std;
#include <fstream>
int main() {
    ifstream fin("text9.txt");
    char x;
    int count = 0;
    while (fin.get(x)) {
        count++;
    }
    cout << count << endl;
}