#include <iostream>
using namespace std;

long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }

int main() {
  long long A, B, C;
  cin >> A >> B >> C;
  long long x = gcd(A, gcd(B, C));
  cout << (A + B + C) / x - 3 << endl;
}
