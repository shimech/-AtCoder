from math import floor, sqrt


def main():
    N = int(input())
    divs = divisor(N)
    ans = 0
    for i in divs:
        m = i - 1
        if m == 0:
            continue
        if N // m == N % m:
            ans += m
    print(ans)


def divisor(N):
    divs = []
    sup = floor(sqrt(N))
    for i in range(1, sup+1):
        if N % i == 0:
            divs.append(i)
            divs.append(N // i)
    return sorted(divs)


if __name__ == '__main__':
    main()
