#include <iostream>
using namespace std;

int main() {
    char b;
    cin >> b;
    char out;
    if (b == 'A') {
        out = 'T';
    }
    else if (b == 'C') {
        out = 'G';
    }
    else if (b == 'G') {
        out = 'C';
    }
    else {
        out = 'A';
    }
    cout << out << endl;
    return 0;
}
