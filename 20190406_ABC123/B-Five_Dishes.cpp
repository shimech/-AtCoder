#include <iostream>
using namespace std;

int main()
{
    int A, B, C, D, E;
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;
    cin >> E;
    int times[5] = {A, B, C, D, E}, r[5], sum;
    for (int i = 0; i < 5; i++) {
        if (times[i] % 10 == 0) {
            r[i] = 10;
        }
        else {
            r[i] = times[i] % 10;
        }
    }
    int index_min = 0;
    for (int i = 1; i < 5; i++) {
        if (r[index_min] > r[i]) {
            index_min = i;
        }
    }
    for (int i = 0; i < 5; i++) {
        if (i == index_min) {
            sum += times[i];
        }
        else {
            if (r[i] == 10) {
                sum += times[i];
            }
            else {
                sum += ((times[i] / 10) + 1) * 10;
            }
        }
    }
    cout << sum << endl;
    return 0;
}
