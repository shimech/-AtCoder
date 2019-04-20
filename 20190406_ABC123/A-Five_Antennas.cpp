#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, k;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    cin >> k;
    int antenna[5] = {a, b, c, d, e};
    bool is_exist = false;
    for (int i = 0; i < 5; i++) {
        for (int j = i; j < 5; j++) {
            if (antenna[j] - antenna[i] <= k) {}
            else {
                is_exist = true;
                break;
            }
        }
    }
    if (is_exist) {
        cout << ":(" << endl;
    }
    else {
        cout << "Yay!" << endl;
    }
    return 0;
}
