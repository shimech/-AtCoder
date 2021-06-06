#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int N = S.length();
    for (int i = 0; i < N; i++) {
        cout << S[i] << endl;
    }
    return 0;
}