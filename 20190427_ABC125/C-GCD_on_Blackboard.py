import fractions
from functools import reduce
from copy import copy


def main():
    N = int(input())
    A = list(map(int, input().split()))
    gcds = []
    for i in range(N):
        if i == 0:
            gcds.append(gcd(*A[i+1:]))
        elif i == N-1:
            gcds.append(gcd(*A[:i]))
        else:
            gcds.append(gcd(gcd(*A[:i]), gcd(*A[i+1:])))
    print(max(gcds))


def gcd(*nums):
    return reduce(fractions.gcd, nums)


if __name__ == '__main__':
    main()
