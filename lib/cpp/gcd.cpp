long long gcd(long long x, long long y) { return (x % y) ? gcd(y, x % y) : y; }
