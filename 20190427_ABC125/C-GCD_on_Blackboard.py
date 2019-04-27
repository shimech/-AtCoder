import fractions
from functools import reduce
from copy import copy


def main():
    N = int(input())
    A = list(map(int, input().split()))
    gcds = []
    for i in range(N):
        A_ = copy(A)
        A_.pop(i)
        gcds.append(gcd(*A_))
    print(max(gcds))


def gcd(*nums):
    return reduce(fractions.gcd, nums)


if __name__ == '__main__':
    main()
