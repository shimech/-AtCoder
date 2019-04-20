#include <iostream>
#include <algorithm>
using namespace std;

int num_diff(string S, string sol);

int main()
{
    string S;
    cin >> S;
    int N = S.length();
    string sol1, sol2;
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            sol1 += "0";
            sol2 += "1";
        }
        else {
            sol1 += "1";
            sol2 += "0";
        }
    }
    int num_sol1, num_sol2;
    num_sol1 = num_diff(S, sol1);
    num_sol2 = num_diff(S, sol2);
    cout << min(num_sol1, num_sol2) << endl;
    return 0;
}

int num_diff(string S, string sol)
{
    int num = 0, N = S.length();
    for (int i = 0; i < N; i++) {
        if (S[i] == sol[i]) {}
        else {
            num++;
        }
    }
    return num;
}
