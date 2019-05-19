from math import ceil, log2


def main():
    N, K = map(int, input().split())
    prob = 0
    for n in range(1, N+1):
        m = ceil(log2(1.0 * K / n)) if n < K else 0
        prob += (1 / N) * (1 / 2) ** m
    print(prob)


if __name__ == '__main__':
    main()
