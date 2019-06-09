from math import factorial


MOD = 1e9 + 7


def main():
    N, M = map(int, input().split())
    a_begin = -1
    ans = 1
    for _ in range(M):
        a_end = int(input())
        num_stair = a_end - a_begin - 1
        cand = 0
        if a_end == 1:
            cand = 1
        elif num_stair == 0:
            ans *= 0
        elif num_stair % 2 == 0:
            for y in range(num_stair // 2):
                x = num_stair - 1 - 2 * y
                cand += comb(x + y, y)
        else:
            for y in range((num_stair - 1) // 2 + 1):
                x = num_stair - 1 - 2 * y
                cand += comb(x + y, y)
        ans %= MOD
        ans *= cand % MOD
        a_begin = a_end
    a_end = N + 1
    num_stair = a_end - a_begin - 1
    cand = 0
    if num_stair == 0:
        ans *= 0
    elif num_stair % 2 == 0:
        for y in range(num_stair // 2):
            x = num_stair - 1 - 2 * y
            cand += comb(x + y, y)
    else:
        for y in range((num_stair - 1) // 2 + 1):
            x = num_stair - 1 - 2 * y
            cand += comb(x + y, y)
    ans %= MOD
    ans *= cand % MOD
    print(int(ans % MOD))
    return


def comb(n, r):
    return factorial(n) // (factorial(r) * factorial(n - r))


if __name__ == '__main__':
    main()
