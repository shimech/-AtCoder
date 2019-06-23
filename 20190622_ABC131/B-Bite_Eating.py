def main():
    N, L = map(int, input().split())
    sum_val = int(N * (L - 1) + N * (N + 1) / 2)
    if L >= 0:
        print(sum_val - L)
    elif 1 - N < L < 0:
        print(sum_val - 0)
    else:
        print(sum_val - (N+L-1))
    return


if __name__ == "__main__":
    main()
