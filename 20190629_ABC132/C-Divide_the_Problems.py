def main():
    N = int(input())
    d = list(map(int, input().split()))
    d_sorted = sorted(d)
    print(d_sorted[N // 2] - d_sorted[N // 2 - 1])
    return


if __name__ == "__main__":
    main()
