#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    if (A <= B) {
        if (C >= A && C <= B) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    else {
        if (C <= A && C >= B) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}
