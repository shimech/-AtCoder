#include <iostream>
#include <string>
using namespace std;

int main() {
    int a; cin >> a;
    string s; cin >> s;
    if (a >= 3200) {
        cout << s << endl;
    } else {
        cout << "red" << endl;
    }
    return 0;
}
