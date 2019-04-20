#include <iostream>
using namespace std;

int main()
{
    int NUM_PUSH = 2;
    int A, B;
    cin >> A >> B;
    int push, sum = 0;
    for (int i = 0; i < NUM_PUSH; i++) {
        if (A >= B) {
            push = A;
            A--;
        }
        else {
            push = B;
            B--;
        }
        sum += push;
    }
    cout << sum << endl;
    return 0;
}
